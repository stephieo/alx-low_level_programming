#include "main.h"
/**
 * _strspn - gets the length of a prefix substring
 * @s: string to be searched
 * @accept: string to be found
 *
 * Return: # of bytes in first segment of s that's made only of bytes in accept
 */
unsigned int _strspn(char *s, char *accept)
{

	int i = 0, j;
	unsigned int length = 0;


	while (s[i] != '\0')
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				length++;
				break;
			}

		}
		i++;
	}

	return (length);
}
