#include "main.h"
#include <unistd.h>

/**
 * _putchar - prints the character c to stdout
 * @c: character to be printed
 *
 * Return 1 if successful
 * On error, return -1 and appropriately setting errno.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
