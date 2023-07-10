#include "main.h"
/**
 * flip_bits - gets the number of bit flips needed  to change to another number
 * @n: original number
 * @m: destination number
 *
 * Return: number of bits required
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int result, mask = 1;
	unsigned int count = 0;

	result = n ^ m;

	while (result)
	{
		if (result & mask)
			count++;
		result >>= 1;
	}


	return (count);
}
