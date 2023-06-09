#include <stdio.h>
/**
 * main - returns the name of the program
 * @argc: no of command line arguments
 * @argv: array of all arguments
 *
 * Return: always 0 (success)
 */
int main(int argc, char *argv[])
{
	(void)argc;

	printf("%s\n", argv[0]);

	return (0);
}
