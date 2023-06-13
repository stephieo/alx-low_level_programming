#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid- allocates memory to a 2-D array
 * @width: number of elements in 1-D array
 * @height: number of 1-D arrays in 2-D array
 *
 * Return: pointer to first 1-D array in 2-D array
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **A;

	if (width <= 0 || height <= 0)
		return (NULL);


	A = malloc(sizeof(*A) * height);

	if (A == NULL)
	{
		return (NULL);
	}


	for (i = 0; i < height; i++)
	{
		A[i] = malloc(sizeof(*(A[i])) * width);

		if (A[i] == NULL)
		{
			while (i >= 0)
			{
				free(A[i]);
				i--;
			}
			return (NULL);
		}
	}


	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			A[i][j] = 0;
		}
	}

	return (A);
}
