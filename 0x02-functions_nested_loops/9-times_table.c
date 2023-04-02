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
		_putchar(48);
		
		b = 1;
		while (b < 10)
		{
			c = a * b;
			if (c % 10 == c)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(c + 48);
			}
			else if (c / 10 > 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((c / 10) + 48);
				_putchar((c % 10) + 48);
			}
			b++;
		}

		_putchar('\n');
		a++;
	}
}

