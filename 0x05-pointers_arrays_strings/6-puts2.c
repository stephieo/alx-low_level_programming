#include "main.h"
/**
 * puts2 - prints every other character in a string
 * @str: pointer to the string array
 * Return: void
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		{
			_putchar(*(str + i));
		}

		i++;

	}
	_putchar('\n');
}
