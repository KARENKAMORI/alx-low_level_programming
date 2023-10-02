#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Function reads text file to print to standard output.
 * @filename: input text file to read
 * @letters: total of letters to be read
 * Return: total bytes read and printed
 *        0 incase of function failure or NULL filename.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t fd, x, y;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	y = read(fd, buffer, letters);
	x = write(STDOUT_FILENO, buffer, y);

	free(buffer);
	close(fd);
	return (x);
}
