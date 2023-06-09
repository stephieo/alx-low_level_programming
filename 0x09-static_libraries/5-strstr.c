#include "main.h"
/**
 * _strstr - finds a substring in a string
 * @haystack:  string to be searched
 * @needle: string to be found
 *
 * Return: returns a pointer to the beginning of the located substring
 */
char *_strstr(char *haystack, char *needle)
{
	int i;

	while (haystack[i] != '\0')
	{
		needle++;
		i++;
	}

	return (haystack);
}
