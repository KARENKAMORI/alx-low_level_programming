#include "lists.h"

/**
 * print_dlistint - Prints all dlistint_t list elements.
 * @h: dlistint_t list head.
 *
 * Return: Node count.
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (num);
}
