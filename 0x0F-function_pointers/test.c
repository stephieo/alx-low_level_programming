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

int abs_is_98(int elem)
{
	return(elem == 98 || -elem == 98);
}

/**
 * main - tester code
 *
 * Return:0
 */
int main(void)
{
	int task2;
	int array[5] = {0, 5, -98, 15, 1024};

	print_name("bob", print_name_as_is);
	array_iterator(array, 5, &print_elem);
	task2 = int_index(array, 5, abs_is_98);
	printf("%d\n", task2);
	return (0);
}
