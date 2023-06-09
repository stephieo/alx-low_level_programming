#include <stdio.h>
/**
 * main - prints all arguments it recieves
 * @argc: # of arguments
 * @argv: array of all arguments
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i = 0;

	if (argc > 0)
	{
		while (argc--)
		{
			printf("%s\n", argv[i++]);
		}
	}

	return (0);
}
