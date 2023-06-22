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
	int num1 = atoi(argv[1]), op_val = *argv[2], num2 = atoi(argv[3]);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	chooser =  get_op_func(argv[2]);

	if (chooser == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	if ((op_val == '/' && num2 == 0) || (op_val == '%' && num2 == 0))
	{
		printf("Error\n");
		exit(100);
	}

	func_result = chooser(num1, num2);
	printf("%d\n", func_result);


	return (0);
}

