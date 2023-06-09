#include "main.h"
/**
 * _memcpy - copies n bytes from source sting to destination string
 * @src: address where bytes wil be copied from
 * @dest: address where bytes will be copied to 
 * @n: number of bytes to be copied
 * 
 * Return: pointer to dest
 */
char *_memcpy(char *s, char *b, unsigned int n)
{
	unsigned int i;

	while(i < n)
	{
		s[i] = b[i];
		i++;
	}
	return(s);
}
