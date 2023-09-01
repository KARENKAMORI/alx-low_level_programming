#include <stdio.h>
#include "main.h"

/**
 * main - program prints number of arguments
 * @argc: argument size
 * @argv: argument array
 *
 * Return: 0 indicating Success
 */

int main(int argc, char *argv[])
{
(void) argv; /*Ignore argv*/
	printf("%d\n", argc - 1);

	return (0);
}
