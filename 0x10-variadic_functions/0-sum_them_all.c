#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - sums all parameters
 * @n: number of integers to add
 *
 * Return: sum of integers
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0; 
	unsigned int i = 0;
	va_list operands;

	va_start(operands, n);
	while (i < n)
	{
		sum += va_arg(operands, int);
		i++;
	}
	va_end(operands);
	return (sum);
}
