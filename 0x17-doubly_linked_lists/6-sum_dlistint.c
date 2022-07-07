#include "lists.h"

/**
 * sum_dlistint - sum of all the data(n) of a dlistint_t linked list
 * @head: a pointer to the first node of dllist
 * Return: if list in empty return 0
 *          otherwisw sum of data(n) of dlistint_t linked list
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *current;

	if (head == NULL)
		return (0);
	current = head;
	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
