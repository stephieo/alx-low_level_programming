#include "main.h"
/**
 * _strcpy - copies a string  pointed to by src to the buffer
 * @src: pointer to string to be copied
 * @dest: pointer to destination character array
 * Return: value of dest( pointer to buffer)
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	dest[i] = '\0';

	return (dest);
}
