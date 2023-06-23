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

	sum = sum_them_all(2, -3, 7);
	printf("%d\n", sum);
	print_numbers(", ", 2, -9, -29);
	print_strings(", ", 2, "Jay","Django");
	print_all("ceis", 'B', 3, "stSchool");


	return(0);
}
