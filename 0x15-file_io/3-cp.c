#include "main.h"
/**
 * main - program that copies the content of a file to another file
 * @ac: argument count
 * @av: argument array
 *
 * Return: 0 (success)
 */
int main(int ac, char **av)
{
	ssize_t readcheck = 10, writecheck;
	size_t bytesread = 1024;
	int filefrom_fd, fileto_fd, closecheck1, closecheck2;
	char *mybuff, *testbuff;

	if (ac != 3)
	{
		write(STDERR_FILENO, "Usage: cp file_from file_to\n", 29);
		exit(97);
	}

	/*malloc buffer*/
	mybuff = malloc(sizeof(char) * 1024);
	if (!mybuff)
	{
		write(STDERR_FILENO, "malloc error\n", 13);
		exit(-1);
	}
	testbuff = malloc(sizeof(char) * 1024);

	/*open file from*/
	filefrom_fd = open(av[1], O_RDONLY);
	/*open file to */
	fileto_fd = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, 664);

		if (filefrom_fd == -1)
		{
			dprintf(2, "Error: Can't read from file %s\n", av[1]);
			exit(98);
		}
		if (fileto_fd == -1)
		{
			dprintf(2, "Error: Can't write to %s\n", av[2]);
			exit(99);
		}
	while (readcheck)
	{
		/*read file from to buffer*/
		readcheck = read(filefrom_fd, mybuff, bytesread);

		if (readcheck == -1)
		{
			dprintf(2, "Error: Can't read from file %s\n", av[1]);
			exit(98);
		}
		printf("%s\n", mybuff);

		/*write from buffer to fileto*/
		writecheck = write(fileto_fd, mybuff, bytesread);
		if (writecheck == -1)
		{
			dprintf(2, "Error: Can't write to %s\n", av[2]);
			exit(99);
		}
		read(fileto_fd, testbuff, bytesread);
		printf("%s", testbuff);
	}
	/*close files*/
	closecheck1 = close(fileto_fd);
	closecheck2 = close(filefrom_fd);
	if (closecheck1 == -1 || closecheck2 == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", closecheck1 ? fileto_fd : filefrom_fd);
		exit(100);
	}
	
	return (0);
}
