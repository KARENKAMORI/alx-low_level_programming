#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *buffer_create(char *file);
void file_close(int fd);

/**
 * buffer_create - function allocates bytes: 1024 for a buffer.
 * @file: filename buffer is storing characters for.
 *
 * Return: A pointer to buffer.
 */
char *buffer_create(char *file)
{
	char *buff;

	buff = malloc(sizeof(char) * 1024);

	if (buff == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buff);
}

/**
 * file_close - function clossing file descriptors.
 * @fd: file descriptor to close.
 */
void file_close(int fd)
{
	int x;

	x = close(fd);

	if (x == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - Function copying from file to file.
 * @argc: total arguments.
 * @argv: pointer array to arguments.
 *
 * Return: 0 for success.
 *
 * Description: exit code 97 if argc is incorrent.
 * exit code 98 if file doesn't exist.
 * exit code 99 if file cannot be written to or created.
 * exit code 100 if file cannot be closed.
 */
int main(int argc, char *argv[])
{
	int from, to, read_int, write_int;
	char *buff;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buff = buffer_create(argv[2]);
	from = open(argv[1], O_RDONLY);
	read_int = read(from, buff, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (from == -1 || r == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buff);
			exit(98);
		}

		write_int = write(to, buff, read_int);
		if (to == -1 || write_int == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buff);
			exit(99);
		}

		read_int = read(from, buff, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);

	} while (read_int > 0);

	free(buff);
	file_close(from);
	file_close(to);

	return (0);
}
