#include "main.h"
/**
 * _strspn - gets the length of a prefix substring
 * @s: string to be searched
 * @accept: string to be found
 *
 * Return: number of bytes in initial segment of s that is made up only of bytes in accept
 */
unsigned int _strspn(char *s, char *accept)
{
	
	int i = 0, j;
	unsigned int length = 0;
	

	while(s[i] != '\0')
	{
		for(j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				length++;
				break;
			}

		}	
		i++;
	}

	return(length);
}
