#include <stdio.h>
/**
 * main -  entry point: print all combinations of two 2-digit numbers
 * Return: always 0 (success)
 */
int main(void)
{
	int x, y;
	int a, b, c, d;

	for (x = 0; x < 100; x++)
	{
		a = (x / 10) + 48;
		b = (x % 10) + 48;

		for (y = 0; y < 100; y++)
		{
			c = (y / 10) + 48;
			d = (y % 10) + 48;

			if ((d > b && a == c) || c > a)
			{
				putchar(a);
				putchar(b);
				putchar(' ');
				putchar(c);
				putchar(d);

				if (!(a == 57 && b == 56))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
