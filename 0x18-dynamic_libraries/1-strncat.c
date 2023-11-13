#include "main.h"
#include <stdio.h>
/**
 * _strncat - concatenates n bytes of source string to destination string
 * @dest: destination string
 * @src: source string
 * @n: number of bytes in src to use
 * Return: pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j;

	while (dest[i] != 0)
	{
		i++;
	}

	i += 1;
	for (j = 0; j < n && src[j] != 0; j++)
	{
		dest[i] = src[j];
	}
	dest[i] = '\0';
	return (dest);
}


