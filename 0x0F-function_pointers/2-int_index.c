/**
 * int_index - a function that searches for integers
 * @array: array to search through
 * @size: size of array
 * @cmp: comparision function
 *
 * Return: index of first element that returns 1, -1 if no match or negative array size
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, ret_val = 0;
	
	if (size <= 0)
		return (-1);

	for(i = 0; i < size; i++)
	{
		ret_val = cmp(array[i]);

		if (ret_val)
			return (ret_val);
	}

	return (-1);
}

	
