#include "main.h"
/**
 * rev_string- reverses a string
 * @s: pointer to original string
 * Return: void
 */
void rev_string(char *s)
{
	int temp, i, last;
	int length = 0;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		length += 1;
	}

	last = length - 1;

	for (i = 0; i < last; i++)
	{
		temp = s[i];
		s[i] = s[last];
		s[last] = temp;
		last--;
	}
}

