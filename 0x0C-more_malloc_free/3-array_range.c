#include <stdlib.h>
#include "main."
/**
 * array_range - creates an array of integers with values from min to max
 * @min: lowest value
 * @max: highest value
 *
 * Return: pointer to array created
 */
int *array_range(int min, int max)
{
	unsigned int length;
	unsigned int i;
	int *arr;

	if (min > max)
		return (NULL);

	length = (max - min) + 1;
	arr = malloc(sizeof(*arr) * length;

	if (arr == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
		arr[i] = min++;

	return (arr);
}
