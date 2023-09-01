#include "main.h"

/**
 * _isalpha - Program checks if alphabetic character
 * @c: input character
 * Return: 1 if c is a letter else 0
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
