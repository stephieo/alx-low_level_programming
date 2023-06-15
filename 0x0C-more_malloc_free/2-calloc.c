#include "main.h"
#include <stdlib.h>
/**
 * _memset -fills memory with a constant byte
 * @s: beginning of memory area
 * @b: byte to fill memory with
 * @n: number of bytes to be filled
 *
 * Return: address of memory area filled
 */
char *_memset(char *s, char b, unsigned int n)
{

	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}

/**
 * _calloc - allocates memory for an array
 * @nmemb: number of members
 * @size: size of each member
 *
 * Return: pointer to allocated memory or NULL on failure
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *array;
	unsigned int arraysize;

	if (nmemb == 0 || size == 0)
		return (NULL);

	array = malloc(nmemb * size);

	if (array == NULL)
	{
		return (NULL);
	}
	else
	{
		arraysize = nmemb * size;
		_memset(array, 0, arraysize);
	}
	return (array);
}

