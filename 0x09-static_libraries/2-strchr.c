#include "main.h"
/**
 * _strchr - locates a character in a string
 * @s: string to be searched
 * @c: character to be found
 *
 * Return: pointer to the first occurence of c in the string
 */
char *_strchr(char *s, char *c)
{
	while(*s != *c)
	{
		s++;
	}
	return(s);
}
