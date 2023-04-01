#include "main.h"
/**
 * _abs - returns the absolute value of an integer
 * @i: integer to be evaluated
 * Return: absolute value of  i
 */
int _abs(int i)
{
	int sign;

	sign = print_sign(i);
	if (sign == 1 || sign == 0)
	{
		return (i);
	}
	else
	{
		return (i * (-1));
	}
}
