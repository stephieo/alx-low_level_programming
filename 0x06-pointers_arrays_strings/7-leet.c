#include "main.h"
/**
 * leet - change string to leet
 * @s: string to be changed
 *
 * Return: pointer to modified string
 */
char *leet(char *s)
{
	char special[] = { 'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	int replace[] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (s[i]  == special[j])
			{
				s[i] = replace[j];
			}
		}
	}
	return (s);
}
