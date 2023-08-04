#include "main.h"
/**
 * ui_pow - implementation of pow function for unsigned int
 * @x: base number
 * @y: exponent
 *
 * Return: x to power y, 1 if y is 0, 0 if y is less than 0
 */
int ui_pow(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	else if (y < 0)
	{
		return (-1);
	}
	else
	{
		return (x * ui_pow(x, (y - 1)));
	}
}

/**
 * binary_to_uint - converts binaty to unsigned integer
 * @b: string of binary chars
 *
 * Return: converted number or 0
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int total = 0, length = 0;

	if (b == NULL)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		length++;
	}

	length--;

	for (i = 0; b[i] != '\0'; i++, length--)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		total += (b[i] - '0') * ui_pow(2, length);
	}
	return (total);
}
