#include "main.h"
/**
 * _strchr - Program entry point
 * @s: value input
 * @c: value input
 * Return: 0 indicates success
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}
