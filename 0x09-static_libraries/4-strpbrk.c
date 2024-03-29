#include "main.h"
/**
 * _strpbrk - searches a string for any set of bytes
 * @s: string to be searched
 * @accept: string to be found
 *
 * Return: pointer to first byte in s that matches a byte in acceopt
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (s[i] != '\0')
	{
		i++;
		accept++;
	}

	return (s);
}
