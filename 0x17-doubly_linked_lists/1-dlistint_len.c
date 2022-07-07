#include "lists.h"

/**
 * dlistint_len - prints the number of elements in a linked list
 * @h: a pointer to the head of a dllist
 * Return: number of elements
 */


size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
