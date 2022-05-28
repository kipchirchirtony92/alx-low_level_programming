#include <stdio.h>
#include "lists.h"

/**
 * print_listint - prints all the elements of listint_t
 * @h:  a pointer to listint_t linked list
 * Return: number of nodes
 */



size_t print_listint(const listint_t *h)
{
	size_t nodes;

	nodes = 0;

	while (h)
	{
		nodes++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (nodes);
}
