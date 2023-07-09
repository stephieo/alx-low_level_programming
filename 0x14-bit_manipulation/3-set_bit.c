#include "main.h"
/**
 * set_bit - sets the value of a bit at an index to 1
 * @n: pointer to binary number
 * @index: desired index to set
 *
 * Return: 1 (success), -1 (error)
 */
int set_bit (unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1;

	if (n == NULL || index > (sizeof(unsigned long int) * 8) - 1)
		return (-1);

	mask = 1 << index;

		*n = *n | mask;
		return (1);
}
