#include "main.h"
/**
 * _strncpy - copies one string to another string
 * @dest: destintation or target string
 * @src: string to be copied
 * @n: maximum number of characters to copy
 *
 * Return: pointer to destination string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j;

	for (j = 0; j < n || src[j] != '\0'; j++)
	{
		dest[j] = src[j];
	}
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}

	return (dest);
}

