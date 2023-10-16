#include "main.h"
/**
 * errochecker - checks for errors in open, read, write and close functions
 * @original: return value for functions acting on original copy
 * @copy: return valure for functions acting on destination file
 * @filename: name of file to check
 * @fd: fd of file being checked
 * @function: code of function being checked
 */
void errorchecker(int original, int copy, char *filename,
			int fd, char function)
{
	if (function != 'c')
	{
		if (original == -1)
		{
			dprintf(2, "Error: Can't read from file %s\n", filename);
			exit(98);
		}

		if (copy== -1)
		{
			dprintf(2, "Error: Can't write to %s\n", filename);
			exit(99);
		}
	}
	else
	{
		if(original == -1  || copy == -1)
		{
			dprintf(2, "Error: Can't close fd %d\n", fd);
			exit(100);
		}
	}
	
}

/**
 * main - program that copies the content of a file to another file
 * @ac: argument count
 * @av: argument array
 *
 * Return: 0 (success)
 */
int main(int ac, char **av)
{
	ssize_t readcheck = 1024, writecheck;
	int filefrom_fd, fileto_fd, closecheck1, closecheck2;
	char mybuff[1024];

	if (ac != 3)
	{
		write(STDERR_FILENO, "Usage: cp file_from file_to\n", 29);
		exit(97);
	}

	/*mybuff = malloc(sizeof(char) * 1024);
	if (!mybuff)
	{
		write(STDERR_FILENO, "malloc error\n", 13);
		exit(-1);
	}*/

	filefrom_fd = open(av[1], O_RDONLY);
	fileto_fd = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	errorchecker(filefrom_fd, fileto_fd, av[1], 0, 'o');
	errorchecker(filefrom_fd, fileto_fd, av[2], 0, 'o');

	while (readcheck != 0)
	{
		readcheck = read(filefrom_fd, mybuff, sizeof(mybuff));
		if (readcheck == -1)
			errorchecker(-1, 0, av[1], 0, 'r');
	/*	printf("%s\n 1\n\n", mybuff);*/

		writecheck = write(fileto_fd, mybuff, readcheck);
		if (writecheck == -1)
			errorchecker(0, -1, av[2], 0, 'w');
	}
	closecheck1 = close(filefrom_fd);
	errorchecker(closecheck1, 0, av[1], fileto_fd, 'c');
	
	closecheck2 = close(fileto_fd);
	errorchecker(0, closecheck2, av[2], fileto_fd, 'c');
	return (0);
}
