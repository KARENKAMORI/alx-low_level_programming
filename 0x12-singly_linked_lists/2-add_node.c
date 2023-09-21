#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - function adds a node at the beginning of the linked list
 * @head: pointer to list_t
 * @str: new node string
 *
 * Return: new element address
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int length = 0;

	while (str[length])
		length++;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->length = length;
	new->next = (*head);
	(*head) = new;

	return (*head);
}
