#include "main.h"
/**
 * _strlen -returns the length of a string
 * @s: pointer to the string
 * Return: length in integers
 */
int _strlen(char *s)
{
	int i;
	int length = 0;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		length += 1;
	}
	return (length);

}

