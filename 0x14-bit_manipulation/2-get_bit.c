#include "main.h"
/**
 * get_bit - returns value of bit an index
 * @n: number in binary
 * @index: index of desired bit
 *
 * Return: value of bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int mask = 1 << index;

	if (index > (sizeof(unsigned long int) * 8) - 1)
		return (-1);

	if (n & mask)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
