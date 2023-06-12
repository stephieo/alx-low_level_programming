#include <stdlib.h>
#include "main.h"
/**
 * _strdup - duplicates a string
 * @str: string to be duplicated
 *
 * Return: pointer to new string (success), NULL if str or malloc is NULL
 */
char *_strdup(char *str)
{
	int i = 0;
	int length = 0;
	char *newstr;

	if (str == NULL)
		return (NULL);

	while (str[i])
	{
		length++;
		i++;
	}

	newstr = malloc(sizeof(char) * (length + 1));

	if (newstr == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
	{
		newstr[i] = str[i];
	}
	newstr[i] = '\0';



	return (newstr);
}
