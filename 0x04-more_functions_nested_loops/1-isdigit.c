#include "main.h"

/**
 * _isdigit - checking for a digit between 0 and 9
 * @c: the character that'll be checked
 * Return: 1 for digit character or 0 otherwisothe
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
