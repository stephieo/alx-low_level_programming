#include "main.h"
/**
 * _strcat - concatenates source string to destination strings
 * @dest: destination string
 * @src: source string
 * Return: pointer to destination string
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j;

	while (dest[i] != 0)
	{
		i++;
	}

	for (j = 0; (dest[i++] = src[j++]) != '\0'; )
	{
		;
	}

	return (dest);
}



