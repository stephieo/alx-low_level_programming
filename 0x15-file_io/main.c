#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(int ac, char **av)
{/*
	ssize_t n;
*/	int res;
	if (ac != 3)
	{
	         dprintf(2, "Usage: %s filename\n", av[0]);
	         exit(1);
	}
	res = append_text_to_file(av[1], av[2]);
	printf("-> %i)\n", res);
	/*	n = read_textfile(av[1], 114);
	printf("\n(printed chars: %li)\n", n);
	n = read_textfile(av[1], 1024);
	printf("\n(printed chars: %li)\n", n);
*/	return (0);
}
