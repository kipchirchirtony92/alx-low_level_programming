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
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: a pointer to a pointer of the first node of dllist linked list
 * @idx: the position to add the new node
 * @n: the data n of the new node
 * Return: if the function fails = NULL
 *          otherwise - the address of the new node/element
 */


dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newNode, *current;
	size_t list_length;
	unsigned int i = 0;

	if (h == NULL)
		return (NULL);
	if (idx == 0)
		return (add_dnodeint(h, n));

	list_length = dlistint_len(*h);


	if (idx == (list_length - 1))
		return (add_dnodeint_end(h, n));

	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	if (*h == NULL)
	{
		newNode->prev = NULL;
		newNode->next = NULL;
		return (newNode);
	}

	current = *h;

	while (current)
	{
		if (i == idx)
		{
			newNode->next = current;
			newNode->prev = current->prev;
			current->prev->next = newNode;
			current->prev = newNode;
			return (newNode);
		}

		current = current->next;
		i++;
	}

	free(newNode);
	return (NULL);
}
