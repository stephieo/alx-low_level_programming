#include "main.h"
/**
 * times_table - prints out the  9 times table
 * Return: nothing
 */
void times_table(void)
{
	int a, b, c;

	a = 0;
	while (a < 10)
	{
		b = 0;
		while (b < 10)
		{
			c = a * b;
			if (c % 10 == c && b == 9)
			{
				_putchar(c + 48);
				_putchar('\n');
			}
			else if (c % 10 == c && b != 9)
			{
				_putchar(c + 48);
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
			else if (c / 10 > 0 && b == 9)
			{
				_putchar((c / 10) + 48);
				_putchar((c % 10) + 48);
				_putchar('\n');
			}
			else if (c / 10 > 0 && b != 9)
			{
				_putchar((c / 10) + 48);
				_putchar((c % 10) + 48);
				_putchar(',');
				_putchar(' ');
			}
			b++;
		}
		a++;
	}
}

