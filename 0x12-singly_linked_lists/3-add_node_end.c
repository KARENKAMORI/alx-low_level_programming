#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - function adds a new node at the end of a linked list
 * @head: double pointer to list_t
 * @str: string input
 *
 * Return: new element address
 */
list_t *add_node_end(list_t **head, const char *str)
{
list_t *new_node;
list_t *temp = *head;
unsigned int length = 0;

while (str[length])
length++;

new_node = malloc(sizeof(list_t));
if (!new_node)
return (NULL);

new_node->str = strdup(str);
new_node->length = length;
new_node->next = NULL;

if (*head == NULL)
{
*head = new_node;
return (new_node);
}

while (temp->next)
temp = temp->next;

temp->next = new_node;

return (new_node);
}
