#include "main.h"
#include <stdlib.h>
/**
 * getlength - gets length of argument
 * @s: argument to measure
 *
 * Return: length of argument
 */
int getlength(char *s)
{
	int len = 0;

	while (s[len])
		len++;

	return (len);
}


/**
 * argstostr - combines arguments into a sentence
 * @ac: argument count
 * @av: argument array
 *
 * Return: pointer to newly formed sentence
 */
char *argstostr(int ac, char **av)
{
	int i, j, a = 0;
	char *sentence;
	int stringlength = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 1; i < ac; i++)
	{
		stringlength = getlength(av[i]);
	}
	sentence = malloc(sizeof(*sentence) * stringlength);
	if (sentence == NULL)
		return (NULL);

	for (i = 1; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			sentence[a++] = av[i][j];
		}
		sentence[a++] = '\n';
	}
	sentence[a] = '\0';
	return (sentence);
}
