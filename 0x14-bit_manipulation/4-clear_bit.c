#include "main.h"
/**
 * clear_bit - sets the value of a bit to 0 at an index
 * @index: index of bit to be set
 * @n: number to be manipulated
 *
 * Return: 1 (success), -1 (error)
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1;

	if (n == NULL || index > (sizeof(unsigned long int) * 8) - 1)
		return (-1);

	mask = 1 << index;
	mask = ~mask;

	*n = *n & mask;
	return (1);
}

