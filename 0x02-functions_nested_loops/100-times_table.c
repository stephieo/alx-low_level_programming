#include "main.h"
/**
 * print_times_table - prints the n times table
 * @n: the multiplication table to be printed
 * Return:nothing
 */
void print_times_table(int n)
{
	int a, b, c;

	if (n <= 15 && n > 0)
	{
		for (a = 0; a <= n; a++)
		{
			_putchar(48);
			for (b = 1; b <= n; b++)
			{
				c = a * b;
				_putchar(',');
				_putchar(' ');
				if (c < 10)
				{
					_putchar(' ');
					_putchar(' ');
				}
				else if (c < 100)
				{
					_putchar(' ');
					_putchar((c / 10) + 48);
				}
				else if (c < 1000)
				{
					_putchar((c / 100) + 48);
					_putchar(((c / 10) % 10) + 48);
				}
				_putchar((c % 10) + 48);
			}
			_putchar('\n');
		}
	}
}
