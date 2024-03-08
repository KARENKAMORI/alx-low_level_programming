#include "lists.h"

/**
 * sum_dlistint - sums all dlistint_t linked list data
 * @head: Beginning of linked list pointer
 *
 * Return: all the data sum, or 0 for empty list
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
