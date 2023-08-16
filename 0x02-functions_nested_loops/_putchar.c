#include <unistd.h>

/**
*_putchar writes the character to be printed to stdout
*
*Return 1 to indicate success
*/
int _putchar(char c)
{
	return(write(1, &c, 1));
}
