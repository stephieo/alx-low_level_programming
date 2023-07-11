#include "main.h"

/**
 * read_textfile - reads a text file and prints to  stdout
 * @filename: file to read from
 * @letters: number of letters to read and print
 *
 * Return: number of letters actually read
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t writecount =1, readcount = -1;
	int newfd, checkclose;
	void *mybuff;

	if (filename == NULL)
		return (0);
	
	mybuff = malloc(sizeof(char) * 1024);
	if(mybuff == NULL)
		return(-1);
	
	newfd = open(filename, O_RDWR | O_CREAT , S_IRWXU | S_IROTH | S_IXOTH);
	if (newfd == -1)
		return (0);

	readcount = read(newfd, mybuff, letters);	
	if (readcount == -1)
		return (0);

	writecount = write( STDOUT_FILENO, mybuff, letters);
	if (writecount == -1)
		return (0);
	
	checkclose = close (newfd);
	if (checkclose == -1)
		return (0);

	return (readcount);
}
