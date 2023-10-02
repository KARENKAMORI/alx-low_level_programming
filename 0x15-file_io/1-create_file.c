#include "main.h"

/**
 * create_file - Function creates a file.
 * @filename: pointer to file name to create.
 * @text_content: pointer to the string to be written on the file.
 *
 * Return: 1 for success else -1.
 */
int create_file(const char *filename, char *text_content)
{
	int fd, x, length = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
			length++;
	}

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	x = write(fd, text_content, length);

	if (fd == -1 || x == -1)
		return (-1);

	close(fd);

	return (1);
}
