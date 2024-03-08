#include "lists.h"

/**
 * add_dnodeint - Adds a new node at the dlistint_t list beginning.
 * @head: head of the dlistint_t list pointer.
 * @n: The new node to contain integer.
 *
 * Return: NULL - if function fails.
 *         Otherwise - new node address.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = *head;
	if (*head != NULL)
		(*head)->prev = new_node;
	*head = new_node;

	return (new_node);
}
