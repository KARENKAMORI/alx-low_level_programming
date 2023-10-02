#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *file);
void close_file(int fd);

/**
 * create_buffer - Function allocates a buffer 1024 bytes.
 * @file: file buffer name storing characters.
 *
 * Return: A newly-allocated buffer pointer.
 */
char *create_buffer(char *file)
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
 * close_file - Function closes file descriptors.
 * @fd: file descriptor to close.
 */
void close_file(int fd)
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
 * main - Function copies from one file to another.
 * @argc: Argument count.
 * @argv: An array of argument pointers.
 *
 * Return: 0 on success.
 *
 * Description: exit code 97 for incorrect argc.
 * exit code 98 if file doesn't exist or can't be read.
 * exit code 99 if file can't be written to or created.
 * exit code 100 if file can't be closed.
 */
int main(int argc, char *argv[])
{
	int from, to, read_file, write_file;
	char *buff;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buff = create_buffer(argv[2]);
	from = open(argv[1], O_RDONLY);
	read_file = read(from, buff, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (from == -1 || read_file == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buff);
			exit(98);
		}

		write_file = write(to, buff, read_file);
		if (to == -1 || write_file == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buff);
			exit(99);
		}

		read_file = read(from, buff, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);

	} while (read_file > 0);

	free(buff);
	close_file(from);
	close_file(to);

	return (0);
}
