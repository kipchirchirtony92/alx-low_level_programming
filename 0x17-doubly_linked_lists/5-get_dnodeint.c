#include "lists.h"

/**
 * get_dnodeint_at_index - gets the nth node
 * @head: a pointer to the first node of a dlistint_t list
 * @index: the index of the node to get in dllist
 * Return: if failed = NULL
 *         otherwise = nth node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	current = head;
	while (current != NULL)
	{
		if (i == index)
			return (current);
		i++;
		current = current->next;
	}

	return (NULL);
}
