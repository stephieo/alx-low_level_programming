#include "main.h"
/**
 * create_file - creates a file
 * @filename: name of file to create
 * @text_content: string to write to file
 *
 * Return: 1(succes), -1 (any function error)
 */
int create_file(const char *filename, char *text_content)
{
	int i, fd, writecheck;
	size_t length;

	if (filename == NULL)
		return (-1);
	fd = open(filename,  O_CREAT | O_RDWR | O_TRUNC, S_IRUSR & S_IWUSR);
	if (fd == -1)
		return (-1);

	if (text_content == NULL)
		text_content =  " ";
	else
		for (i = 0, length = 0; text_content[i] != '\0'; i++, length++)
			;


	writecheck = write(fd, text_content, length);
	if (writecheck == -1)
		return (-1);


	close(fd);
	return (1);

}
