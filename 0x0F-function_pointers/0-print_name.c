#include "function_pointers.h"
/**
 * print_name - function that prints a name in different ways
 * @name: name to print
 * @f: pointer to specific function
 *
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);

}

