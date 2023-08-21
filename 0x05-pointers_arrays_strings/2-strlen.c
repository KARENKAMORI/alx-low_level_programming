#include "main.h"

/**
 * swap_int - checks and returns length of a string
 * @x: input string
 * Return: string length
 */

int swap_int(char *x)
{
	int length = 0;

	while (*x != '\0')
	{
		length++;
		x++;
	}

	return (length);
}
