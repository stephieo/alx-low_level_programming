#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
/**
 * recurse_helper - used to print multiple digit numbers in right order
 * @num: number to print
 *
 * Return:
 */
void recurse_helper(int num)
{
	int n;

	if (num == 0)
	{
		return;
	}
	else
	{
		n = num / 10;
		recurse_helper(n);
		_putchar((num % 10) + '0');
		return;
	}


}
/**
 * print_numbers - prints all integers passed to it
 * @seperator: character(s) to seperate each number
 * @n: number of integers
 *
 * Return: nothing
 */
void print_numbers(const char *seperator, const unsigned int n, ...)
{
	unsigned int i = 0;
	int num, sep;
	va_list digits;

	va_start(digits, n);

	while (i < n)
	{
		num = va_arg(digits, int);

		if (num < 0)
		{
			_putchar('-');
			num = -num;
		}

		if (num % 10 == num)
		{
			_putchar(num + '0');
		}
		else
		{
			recurse_helper(num);
		}

		if (seperator != NULL && i != (n-1))
		{
			sep = 0;
			while (seperator[sep] != '\0')
			{
				_putchar(seperator[sep]);
				sep++;
			}
		}
		i++;
	}
		_putchar('\n');
}
