#include "main.h"
/**
 * puts_half - prints the second half of a string
 *  @str: string to be printed
 *  Return: void
 */
void puts_half(char *str)
{
	int i, j, n;

	for (i = 0; str[i] != '\0'; i++)
	{
		;
	}

	if (i % 2 == 0)
	{
		j =  i / 2;
		while (j < i)
		{
			_putchar(str[j]);
			j++;
		}
	}
	else
	{
		n = (i - 1) / 2;
		j = i - n;
		while (j < i)
		{
			_putchar(str[j]);
			j++;
		}
	_putchar('\n');

	}
}
