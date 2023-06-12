#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/*
 * main- personal tester code
 *Return: 0
 */
int main(void)
{
	int i, j;
	int **test;
	test = alloc_grid(4,3);

	if(test == NULL)
		printf("failure");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 4; j++)
		{
			printf("%d ", test[i][j]);
		}
		printf("\n");
	}
 	free_grid(test, 3);	

	return(0);
}
