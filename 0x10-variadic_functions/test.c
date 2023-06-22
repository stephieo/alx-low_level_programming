#include "variadic_functions.h"
#include <stdio.h>
/**
 * main - local tester code
 *
 * Return: always 0
 */
int main(void)
{
	int sum;

	sum = sum_them_all(2, 3, 7);
	printf("%d\n", sum);

	return(0);
}
