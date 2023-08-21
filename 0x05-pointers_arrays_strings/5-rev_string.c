#endif

#include "main.h"

/**
 * rev_string - print string in reverse, followed by a new line.
 * @x: input string
 * Return reversed string
 */

void rev_string(char *x)
{
	char str = x[0];
	int count = 0;
	int i;

	while (x[count] != '\0')
	count++;
	for (i = 0; i < count; i++)
	{
		count--;
		str = x[i];
		x[i] = x[count];
		x[count] = str;
	}
}
