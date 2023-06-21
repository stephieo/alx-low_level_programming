#include <stdio.h>
#include "main.h"
void print_name_as_is(char *name)
{
	printf("hello, %s\n", name);
}
/**
 * main - tester code
 *
 * Return:0
 */
int main(void)
{
	print_name("bob", print_name_as_is);
	printf("\n");
	return (0);
}
