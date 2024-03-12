#include "search_algos.h"
/**
 * binary_search -  searches for value in integer array with binary search
 * @array: pointer to first element in array
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: index where value is located, or -1
 */
int binary_search(int *array, size_t size, int value)
{
	int mid_index;
	int left =  0;
	int right = (int)size - 1;

	if (array == NULL)
		return (-1);

	while (left  <= right)
	{
		print_array(array, left, right);
		mid_index = (left + right) / 2;

		if (value == mid_index)
			return (mid_index);
		else if (value > mid_index)
			left = mid_index + 1;
		else if (value < mid_index)
			right = mid_index - 1;
	}

	return (-1);
}


/**
 * print_array -  prints the section of array being searched
 * @array: pointer to array
 * @left: leftmost index
 * @right: rightmost index
 */
void print_array(int *array, int left, int right)
{
	int i;

	printf("Searching in array: ");
	for (i = left; i  <= right; i++)
	{
		if (i == right)
			printf("%d\n", array[i]);
		else
			printf("%d, ", array[i]);
	}
}
