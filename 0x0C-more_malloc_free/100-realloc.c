#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to previous allocated space
 * @old_size: size in bytes of old memory block
 * @new_size: size in bytes of  new memory block
 *
 * Return: pointer to new allocation
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *oldp;
	char *newptr;
	unsigned int min;
	unsigned int i;

	oldp = ptr;

	if (ptr == NULL)
	{
		newptr = malloc(new_size);
		free(ptr);
		return (newptr);
	}


	if (new_size == old_size)
	{
		return (ptr);
	}
	else if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	else
	{
		newptr = malloc(new_size);

		if (newptr == NULL)
			return (NULL);

		min = new_size < old_size ? new_size : old_size;
		printf("%u\n", min);
		for (i = 0; i < min; i++)
			newptr[i] = oldp[i];
	}
	free(oldp);
	return (newptr);

}
