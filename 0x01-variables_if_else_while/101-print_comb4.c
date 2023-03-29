#include <stdio.h>
/**
 * main -entry point
 *
 * Description: printing all combinations of three digits without repitition
 *
 * Return: always 0 (success)
 */
int main(void)
{
	int a;
	int b;
	int c;

	for (a = 48 ; a < 58 ; a++)
	{
		for (b = 48 ; b < 58 ; b++)
		{
			for (c = 48 ; c < 58 ; c++)
			{
				if ((b != a && b > a) && (c != b && c > b))
				{
					putchar(a);
					putchar(b);
					putchar(c);
					if ((a + b + c) != 168)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

