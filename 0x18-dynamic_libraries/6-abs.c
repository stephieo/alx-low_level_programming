#include "main.h"
/**
 * _abs - returns the absolute value of an integer
 * @i: integer to be evaluated
 * Return: absolute value of  i
 */
int _abs(int i)
{

	if (i >= 0)
	{
		return (i);
	}
	else
	{
		return (i * (-1));
	}
}
