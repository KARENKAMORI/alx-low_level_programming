#include "main.h"
/**
 * _strlen - function returning string length.
 * @s: input string
 * Return: string length
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
