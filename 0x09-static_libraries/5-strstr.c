#include "main.h"
/**
 * _strstr - Program Entry point
 * @haystack: input string
 * @needle: input string
 * Return: 0 indicating Success
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *i = haystack;
		char *j = needle;

		while (*i == *j && *j != '\0')
		{
			i++;
			j++;
		}

		if (*j == '\0')
			return (haystack);
	}

	return (0);
}
