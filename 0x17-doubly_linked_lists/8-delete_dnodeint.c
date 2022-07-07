#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a dlistint_t list
 * @h: head of doubly linked list
 *
 * Return: number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	int count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}


/**
 * delete_dnodeint_at_index - deletes the node at index of a linked list
 * @head: a pointer to the first node of a linked list
 * @index: position of the element/node to delete
 * Return: if successful = 1
 *         otherwiswe if failure = -1
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current;
	size_t list_length;
	unsigned int i = 0;

	if (head == NULL || *head == NULL)
		return (-1);

	list_length = dlistint_len(*head);
	if (index >= list_length)
		return (-1);

	current = *head;

	if (index == 0)
	{
		*head = current->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(current);
		return (-1);
	}

	if (index == (list_length - 1))
	{
		while (current->next != NULL)
			current = current->next;
		free(current);
	}

	while (current)
	{
		if (i == index)
		{
			current->next->prev = current->prev;
			current->prev->next = current->next;
			free(current);
			return (-1);
		}
		current = current->next;
		i++;
	}
	return (-1);
}
