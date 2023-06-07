#include "main.h"
/**
 * looper - checks if a number is divisible by any number before it
 * @x: the divisor
 * @n: the  dividend
 *
 * Return: 0 if x is 1 or if n is divisible by x, 1 if  is prime
 */
int looper(int x, int n)
{
	if (x > 1)
	{
		if (n % x == 0)
		{
			return (0);
		}
		else
		{
	
			return (looper(x-1,n));
		}
	}
	else if (x <= 1)/* switch this to the top*/
	{
		return (0);
	}


}
/**
 * is_prime_number - checks if a number is a prime number
 * @n: number to be checked
 *
 * Return: 1 if a prime number, 0 if not.
 */
int is_prime_number(int n)
{
	int x;

	if (n == 1)
		return (0);

	x = n -1;
	return (looper(x,n));

}

