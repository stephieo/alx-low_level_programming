#include "main.h"
/**
 * puts2 - prints every other character in a string
 * @str: pointer to the string array
 * Return: void
 */
void puts2(char *str)
{
	int i;

	for (i = 0; *(str + i) != 0; i += 2)
	{
		_putchar(*str + i);
	}
	_putchar('\n');
}
