#include "main.h"

/**
 * _isupper - checks for existance of lowercase characters
 * @x: character that'll be checked
 * Return: 1 incase of uppercase letters or 0 incase of lowercase letters
 */

int _isupper(int x)
{
	if (x >= 65 && x <= 90)
	{
		return (1);
	}
	return (0);
}
