#include "main.h"
/**
 * print_diagonal - prints a diagonal line
 * @n: size of the line
 * Return: void
 */
void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= n; i++)
		{
			for (j = 1; j <=  n; j++)
			{
				if (j < i)
				{
					_putchar(' ');
				}
			}
			_putchar('\\');
			_putchar('\n');

		}
	}
}
