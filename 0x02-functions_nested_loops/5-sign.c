#include "main.h"
/**
 * print_sign - shows the sign of any number
 *
 * @n: number to be checked
 *
 * Return: 1 (positive), 0, -1 (negative)
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (0);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}

	return (0);
}

