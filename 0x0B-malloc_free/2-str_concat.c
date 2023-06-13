#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * getlens - gets the lengths of two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: total length of both strings
 */
int getlens(char *s1, char *s2)
{
	int len1 = 0, len2 = 0;

	if (s1 == NULL)
		s1 = " ";

	if (s2 == NULL)
		s2 = " ";

	while (s1[len1])
	{
		len1++;
	}

	while (s2[len2])
	{
		len2++;
	}

	return (len1 + len2);
}


/**
 * str_concat - concatenates 2 strings with malloc
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to new string (success), NULL (str is NULL or malloc fails)
 */
char *str_concat(char *s1, char *s2)
{
	int i, total_length;
	char *constr;

	total_length = getlens(s1, s2);

	constr = malloc(sizeof(char) * (total_length + 1));

	if (constr == NULL)
		return (NULL);

	for (i = 0; s1 && s1[i]; i++)
		constr[i] = s1[i];


	while (s2 && *s2)
	{
		constr[i] = *s2;
		s2++;
		i++;
	}
	constr[i] = '\0';

	return (constr);
}

