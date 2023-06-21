#include "function_pointers.h"
/**
 * array_iterator - executes a function on every element of an array
 * @array: pointer to array
 * @size: size of array
 * @action: function to be executed on elements
 *
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;


	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
