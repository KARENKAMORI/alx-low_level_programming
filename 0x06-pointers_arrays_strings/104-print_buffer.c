#include "main.h"
#include <stdio.h>

/**
 * print_buffer - function that prints buffer
 * @b: input buffer
 * @size: input size
 * Return: void
 */

void print_buffer(char *b, int size)
{
	int i, j, x;

	x = 0;

	if (size <= 0)
	{
		printf("\n");
		return;
	}
	while (x < size)
	{
		j = size - x < 10 ? size - x : 10;
		printf("%08x: ", x);
		for (i = 0; i < 10; i++)
		{
			if (i < j)
				printf("%02x", *(b + x + i));
			else
				printf("  ");
			if (i % 2)
			{
				printf(" ");
			}
		}
		for (i = 0; i < j; i++)
		{
			int z = *(b + x + i);

			if (z < 32 || z > 132)
			{
				z = '.';
			}
			printf("%c", z);
		}
		printf("\n");
		x += 10;
	}
}
