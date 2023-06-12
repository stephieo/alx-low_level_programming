#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - frees the grid created by alloc_grid
 * @grid: pointer to the 2-D grid created by alloc_grid
 * @height: number of 1-D arrays in grid
 *
 * Return: nothing
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);
}
