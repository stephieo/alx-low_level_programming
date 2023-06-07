#include "main.h"
/**
 * _strcmp - comparing two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: -ve if s1 < s2, +ve if s1 > s2, 0 if s1 == s2
 */
int _strcmp(char *s1, char *s2)
{
	int i, ret_val;

	for (i = 0; s1[i] != '\0'; i++)
	{
		if (s1[i] == s2[i])
			ret_val = 0;
		else if (s1[i] < s2[i])
			return (ret_val = (s1[i] - s2[i]));
		else if (s1[i] > s2[i])
			return (ret_val = (s1[i] - s2[i]));

	}
	return (ret_val);
}
