#include "main.h"
/**
 * check_if_set - checks each bit of a binary number
 * @n: binary number
 */
void check_if_set(unsigned long int n)
{
	if (!n)
	{
		return;
	}
	else
	{
		check_if_set(n >> 1);
		(n & 1) ? _putchar('1') : _putchar('0');
		return;
	}
}

/**
 * print_binary - prints integers in binary
 * @n: number to be printed
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		_putchar('0');
		return;
	}
	else if (n == 1)
	{
		_putchar('1');
		return;
	}

	check_if_set(n);
}
