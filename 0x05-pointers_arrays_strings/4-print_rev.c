#include "main.h"
/**
 * print_rev- reverses a string
 * @s: pointer to original string
 * Return: void
 */
void print_rev(char *s)
{
	int i, last;
	int length = 0;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		length += 1;
	}

	last = length - 1;

	while (last >= 0)
	{
		_putchar(s[last]);
		last--;
	}
	_putchar('\n');
}
