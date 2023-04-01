#include "main.h"
/**
 * print_sign - prints the sign of an integer
 * @n: the integer to be checked
 * Return: 1 (positive), -1 (negative), 0 (zero)
 */
int print_sign(int n)
{
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else
	{
		return (0);
	}
}
