#include "main.h"
/**
 * print_last_digit -returns the value of the last digit of an integer
 * @n:integer to be evaluated
 * Return: value of the last digit
 */
int print_last_digit(int n)
{
	int last_digit;

	last_digit = n % 10;
	if (last_digit < 0)
	{
		_putchar((last_digit * (-1)) + '0');
		return ((last_digit * (-1)));
	}
	else
	{
		_putchar(last_digit + '0');
		return (last_digit);
	}
}
