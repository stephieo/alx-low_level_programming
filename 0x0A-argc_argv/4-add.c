#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - adds two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: sum of numbers
 */
int main( int argc, char *argv[])
{
	int a, b, sum = 0;
	
	if(argc	> 1)
	{
		for(a = 1; argv[a]; a++)
		{
			for(b = 0; argv[a][b]; b++)
			{
				if(argv[a][b] <= '0' && argv[a][b] >= '9')
				{
					printf("Error\n");
					return (0);
				}
			}
				sum += atoi(argv[a]);
		}
		printf("%d\n", sum);
		return(sum);
	}
	else
	{
		printf("0\n");
		return(0);
	}
}
