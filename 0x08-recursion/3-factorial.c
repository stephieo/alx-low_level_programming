#include "main.h"
/**
 * factorial - returns the factorial of
 * @n: any positive integer
 *
 * Return: -1 if n is negative, factorial of n if n is positive
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
