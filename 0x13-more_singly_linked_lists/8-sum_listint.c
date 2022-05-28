#include "lists.h"

/**
 * sum_listint - finds the sum of all the data of listint linked list
 * @head: the head of a linked list
 * Return: the sum of all data(n) or 0 when list is empty
 */


int sum_listint(listint_t *head)
{
	unsigned int sum = 0;

	if (head == NULL)
		return (sum);

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
