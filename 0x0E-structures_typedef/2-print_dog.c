#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * print_dog-prints a variable of type struct dog
 * @d : pointer to struct
 *
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (d)
	{
		if (d->name == NULL)
			printf("Name: (nil)\n");
		else
			printf("Name: %s\n", d->name);


		if (d->age <= 0)
			printf("Age: %f\n", 0.000000);
		else
			printf("Age: %f\n", d->age);


		if (d->owner == NULL)
			printf("Owner: (nil)\n");
		else
			printf("Owner: %s\n", d->owner);
	}
	else if (d == NULL)
	{
		return;
	}
}
