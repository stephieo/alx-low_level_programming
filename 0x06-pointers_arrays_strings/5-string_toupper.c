#include <stdio.h>
#include "main.h"
/**
 * string_toupper - changes a string to upper case
 * @s: string to change
 *
 * Return: pointer to changed string
 */
char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] = s[i] - 32;
	}

	return (s);
}
