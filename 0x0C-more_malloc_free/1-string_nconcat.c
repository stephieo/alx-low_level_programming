#include "main.h"
#include <stdlib.h>
/**
 * getnlens - get length up to n number of bytes of s2
 * @s1: first string
 * @s2: second string
 * @n: number of bytes in s2
 *
 * Return: total length
 */
int getnlens(char *s1, char *s2, int n)
{
	int len1 = 0;
	int len2 = 0;
	int total;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[len1])
		len1++;

	while (s2[len2] && len2 < n)
		len2++;

	total = len1 + len2;

	return (total);
}


/**
 * string_nconcat - concatenates up to n bytes form first to second string
 * @s1: first string
 * @s2: second string
 * @n: maximum number of bytes from first string
 *
 * Return: pointer to concatenared string or NULL on failure
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i, total_length;
	char *constr;

	total_length  = get lens(s1, s2, n);

	constr = malloc(sizeof(*constr) * total_length + 1);

	if (constr == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		constr[i] = s1[i];

	while (*s2 && i < total_length)
	{
		constr[i] = *s2;
		s2++;
		i++;
	}

	constr[i] = '\0';
	return (constr);
}
