#include <stdio.h>
#include "lists.h"

/**
 * print_list - Function printing all elements of a linked list
 * @h: pointer to list_t to print
 *
 * Return: number of printed nodes
 */
size_t print_list(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		n++;
	}

	return (n);
}
