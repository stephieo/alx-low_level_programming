#include "search_algos.h"
/**
 * jump_search - searches for a value using the jump search algorithm
 * @array: pointer to the first element of  the array
 * @size: size of the array
 * @value: value to search for
 *
 * Return: first index where value is located or -1 (NULL array or not found)
 */
int jump_search(int *array, size_t size, int value)
{
	int m = sqrt(size);
	size_t low = 0;
	size_t high = low + m;

	if (array == NULL)
		return (-1);

	while (low <= size - 1 && array[low] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", low, array[low]);
		if (array[high] < value && high < size)
		{
			low = high;
			high += m;
		}
		else
		{
			break;
		}
	}
		printf("Value found between indexes[%ld] and [%ld]\n", low, high);

	while (low < size)
	{
		printf("Value checked array[%ld] = [%d]\n", low, array[low]);
		if (array[low] == value)
			return (low);
		low++;
	}
	return (-1);
}
