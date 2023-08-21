#include "main.h"

/**
 * _strlen - checks and returns length of a string
 * @x: input string
 * Return: string length
 */

int _strlen(char *x)
{
	int length = 0;

	while (*x != '\0')
	{
		length++;
		x++;
	}

	return (length);
}
