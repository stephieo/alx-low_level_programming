#include "main.h"
/**
 * _memset - fills memory with a constant byte
 * @s: beginning of memory area
 * @b: byte to fill memory with
 * @n: number of bytes to be filled
 *
 * Return: address of memory area filled
 */
char *_memset(char *s, char b, unsigned int n)
{

	unsigned int i = 0;

	while(i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}

