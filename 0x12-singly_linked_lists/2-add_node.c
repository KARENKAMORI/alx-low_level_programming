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
	list_t *new_head;
	unsigned int length = 0;

	while (str[length])
		length++;

	new_head = malloc(sizeof(list_t));
	if (!new_head)
		return (NULL);

	new_head->str = strdup(str);
	new_head->length = length;
	new_head->next = (*head);
	(*head) = new_head;

	return (*head);
}
