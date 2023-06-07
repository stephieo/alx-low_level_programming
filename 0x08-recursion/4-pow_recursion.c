#include "main.h"
/**
 * _pow_recursion - implementation of pow function with recursion
 * @x: base number
 * @y: exponent
 *
 * Return: x to power y, 1 if y is 0, -1 if y is less than 0
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	else if (y < 0)
	{
		return(-1);
	}
	else
	{
		return(x * _pow_recursion(x, (y - 1)));
	}
}
