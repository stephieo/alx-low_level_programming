#include <stdio.h>
#include "3-calc.h"
#include <stdlib.h>
#include <string.h>
/**
 * main- program to perform simple arithmetic operations
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 (success)
 */
int main(int argc, char *argv[])
{
	int (*chooser)(int, int);
	int func_result = 0;

	if (argc != 4)
	{
		printf("Error\n");
		exit (98);
	}
	
	chooser =  get_op_func(argv[2]);
	
	if(chooser == NULL)
	{
		printf("Error\n");
		exit (99);
	}
	
	if((*argv[2] == '/' || *argv[2] == '%') && atoi(argv[3]) == 0)
	{
		printf("Error\n");
		exit (100);
	}

	func_result = chooser(atoi(argv[1]), atoi(argv[3]));
	printf("%d\n",func_result);


	return (0);
}

