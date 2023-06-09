#include <stdlib.h>
#include <stdio.h>
/**
 * main - multiplies two integers
 * @argc: # of arguments
 * @argv: array of arguments
 *
 * Return: 0 if success, 1 if no arguments
 */
int main(int argc, char * argv[])
{
	if (argc > 1)
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}
	else
	{
		printf("Error\n");
		return(1);
	}
		
}
