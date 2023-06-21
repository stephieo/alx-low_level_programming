#include <stdio.h>
#include "function_pointers.h"

void print_name_as_is(char *name)
{
	printf("hello, %s\n", name);
}

void print_elem(int elem)
{
	printf("%d\n", elem);
}
/**
 * main - tester code
 *
 * Return:0
 */
int main(void)
{
	int array[5] = {0, 5, 10, 15, 1024};

	array_iterator(array, 5, &print_elem);
	print_name("bob", print_name_as_is);
	printf("\n");
	return (0);
}
