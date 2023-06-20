#include "dog.h"
#include <stdlib.h>
/**
 * new_dog- function that creates a new dog 
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: pointer to the new instance of dog_t
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new;
	
	new =  malloc(sizeof(dog_t));

	if (new == NULL)
	{
		free(new);
		return(NULL);
	}

	new->name = name;
	new->age = age;
	new->owner = owner;

	return (new);
}
