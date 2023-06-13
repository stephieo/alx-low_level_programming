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

	A = malloc(sizeof(int *) * height);

	for (i = 0; i < height; i++)
	{
		A[i] = malloc(sizeof(int) * width);
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