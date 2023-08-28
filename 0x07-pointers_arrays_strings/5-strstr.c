#include "main.h"
/**
 * _strstr - Program's entry point
 * @haystack: value input
 * @needle: value input
 * Return: 0 indicating success
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *x = haystack;
		char *y = needle;

		while (*x == *y && *y != '\0')
		{
			x++;
			y++;
		}

		if (*y == '\0')
			return (haystack);
	}
	return (0);
}
