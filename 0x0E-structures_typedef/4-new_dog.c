#include "dog.h"
#include <stdlib.h>
/**
 * inputlen - gets lengthof string input
 * @s: pointer to string
 *
 * Return: length of string
 */
int inputlen(char *s)
{
	int i = 0, length = 0;

	while (s[i++])
		length++;
	return (length);
}

/**
 * _strcpy - copoies string from source to destination
 * @src: pointer to source
 * @dest: pointer to destination string
 *
 * Return:pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';

	return (dest);
}

/**
 * new_dog - function that creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: pointer to the new instance of dog_t
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new;
	int len_n = 0, len_o = 0;

	new =  malloc(sizeof(dog_t));

	if (new == NULL)
	{
		free(new);
		return (NULL);
	}

	len_n = inputlen(name);
	new->name = malloc(len_n + 1);
	if (new->name == NULL)
	{
		free(new);
	}
	_strcpy(new->name, name);

	new->age = age;

	len_o = inputlen(owner);
	new->owner = malloc(len_o + 1);

	if (new->owner == NULL)
	{
		free(new);
		free(new->name);
	}
	_strcpy(new->owner, owner);

	return (new);
}
