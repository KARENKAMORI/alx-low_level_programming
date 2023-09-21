#include <stdlib.h>
#include "lists.h"

/**
 * list_len - function returning number of linked list elements
 * @h: list_t pointer
 *
 * Return: total of elements in h
 */
size_t list_len(const list_t *h)
{
	size_t x = 0;

	while (h)
	{
		x++;
		h = h->next;
	}
	return (x);
}
