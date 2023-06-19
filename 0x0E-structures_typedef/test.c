#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * main - check the code .
 * Return: Always 0.
 */
int main(void)
{
	/*dog_t *my_dog;

	my_dog = new_dog("Poppy", 3.5, "Bob");
	printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog->name, my_dog->age);
	free_dog(my_dog);*/

	struct dog my_dog;
		my_dog.name = "poppy";
		my_dog.age = 3.5;
		my_dog.owner = "bob";
		print_dog(&my_dog);
	return (0);
}
