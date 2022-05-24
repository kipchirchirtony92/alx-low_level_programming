#include "lists.h"


/**
 * list_len - returns the number of elements in a linked list
 * @h: singly linked list
 * Return: the number of elements in the list @h
 */



size_t list_len(const list_t *h)
{
	size_t num = 0;

	while (h)
	{
		h = h->next;
		num++;
	}
	return (num);
}
