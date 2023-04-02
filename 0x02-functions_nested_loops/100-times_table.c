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
		a = 0;
		while (a <= n)
		{
			_putchar(48);

			b = 0;
			while (b <= n)
			{
				c = a * b;
				if (c % 10 == c)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(c + 48);
				}
				else if ((c / 10) > 0 && (c / 100) == 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar((c / 10) + 48);
					_putchar((c % 10) + 48);
				}
				else if ((c / 100) > 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar((c / 100) + 48);
					_putchar(((c / 10) % 10) + 48);
					_putchar((c % 10) + 48);
				}
				b++;
			}
			_putchar('\n');
			a++;
		}
	}
}


