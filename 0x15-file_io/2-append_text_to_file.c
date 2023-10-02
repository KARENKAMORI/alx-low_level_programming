#include "main.h"

/**
 * append_text_to_file - function appends text at the end of a file.
 * @filename: pointer to the filename.
 * @text_content: The string to be added at the end of the file.
 *
 * Return: -1 if filename is NULL or function fails or file doesn't exist.
 *         else return 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int x, y, length = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
			length++;
	}

	x = open(filename, O_WRONLY | O_APPEND);
	y = write(x, text_content, length);

	if (x == -1 || y == -1)
		return (-1);

	close(x);

	return (1);
}
