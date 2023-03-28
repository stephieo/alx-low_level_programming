#include <stdio.h>
/**
 * main - entry point
 *
 * Description: printi; all combinations of 2 digits, without repitition
 * Return: always 0 (success)
 */
int main(void)
{
	int a;
	int b;

	for (a = 48; a < 58; a++)
	{
		for (b = 48; b < 58; b++)
		{
			if ((b != a) && (b > a))
			{
				putchar(a);
				putchar(b);
				if ((a + b) != 113)
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

