#include "lists.h"

/**
 * free_dlistint - Function frees a linked dlistint_t list.
 * @head: dlistint_t list head.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp_node;

	while (head)
	{
		temp_node = head->next;
		free(head);
		head = temp_node;
	}
}
