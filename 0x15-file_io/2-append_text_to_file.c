#include "main.h"
/**
 * append_text_to_file - creates a file
 * @filename: name of file to create
 * @text_content: string to write to file
 *
 * Return: 1(succes), -1 (any function error)
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int i = 0, fd, writecheck;
	size_t length = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);


	if (text_content != NULL)
	{
		for (i = 0, length = 0; text_content[i] != '\0'; i++, length++)
			;

		writecheck = write(fd, text_content, length);
		if (writecheck == -1)
			return (-1);

	}

	close(fd);
	return (1);

}
