#include "lists.h"


/**
 * print_dlistint - prints all the nodes of a dlistint list
 * @h: a pointer to the head of a dlistint list
 * Return: number of nodes in a dlistint list
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		printf("%d\n", h->n);
		nodes++;
		h = h->next;
	}
	return (nodes);
}
