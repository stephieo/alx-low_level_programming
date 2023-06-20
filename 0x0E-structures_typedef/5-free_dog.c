#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - frees dogs
 * @d: pointer to variable of type dog_t
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d);
		free(d->name);
		free(d->owner);
	}
}
