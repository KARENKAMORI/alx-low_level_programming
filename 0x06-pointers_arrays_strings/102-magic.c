#include <stdio.h>

int main(void)
{
	int i;
	int array[5];
	int *p;

	array[2] = 1024;
	p = &i;
	/*
	* write your line of code here...
	* Note:
	* - Don't use a
	* - Don't modify p
	* - only one statement
	* - Don't code anything else than this line of code
	*/
	*(p + 5) = 98;
	/* this prints 98\n */
	printf("a[2] = %d\n", array[2]);
	return (0);
}
