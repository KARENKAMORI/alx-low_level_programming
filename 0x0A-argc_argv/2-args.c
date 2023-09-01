#include <stdio.h>
#include "main.h"

/**
 * main - program printing all arguments it receives
 * @argc: argument count
 * @argv: argument array
 *
 * Return: 0 indicating Success
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
