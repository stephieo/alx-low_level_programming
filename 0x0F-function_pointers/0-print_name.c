#include <stdlib.h>
/**
 * print_name - function that prints a name in different ways
 * @name: name to print
 * @f: pointer to specific function
 *
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
		return;
	f(name);


}

