#include <stdio.h>
#include "main.h"

/**
 * main - program prints it's name
 * @argc: argument count
 * @argv: arguments array
 *
 * Return: 0 for Success
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
