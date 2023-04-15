#include <stdio.h>
#include "main.h"
/**
 * print_array- print n elements of an array
 * @n: number of elements
 * @a: name of array
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", *(a + i));

		if (i != (n - 1))
		{
			printf(", ");
		}
		else if ( i == (n - 1))
		{
			printf("\n");
		}
	}
}

