#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - tester code
 *
 * Return: Always 0
 */
int main(void)
{
	char *concat;
	
	concat = string_nconcat("Best ", "school !!!", 6);
	printf("%s\n", concat);
	free(concat);
	
	return (0);
}
