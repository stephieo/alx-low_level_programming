#include "main.h"
/**
 *_puts_recursion - prints a string, followed by a new line
 * @s: pointer to a string
 * Return: void
 */
void _puts_recursion(char *s)
{
	int i = 0;

	if (s[i] == '\0')
	{
		_putchar('\n');
		return;
	}
	else
	{
		_putchar(s[i]);
		_puts_recursion(s + 1);
		return;
	}
}
