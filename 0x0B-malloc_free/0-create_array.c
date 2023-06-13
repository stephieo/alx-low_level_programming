#include <stdlib.h>
/**
 * create_array - creates an array using malloc
 * @size: desired size of array
 * @c: character to be used for initialization
 *
 * Return: null (size is 0 or malloc returns NULL) , pointer to array (succes)
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i = 0;

	if (size == 0)
		return (NULL);


	arr = (char *)malloc(size * sizeof(char));

	if (arr == NULL)
		return (NULL);

	while (i < size)
	{
		arr[i] = c;
		i++;
	}

	return (arr);
}
