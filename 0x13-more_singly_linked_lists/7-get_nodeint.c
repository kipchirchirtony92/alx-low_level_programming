#include "lists.h"
#include <stdlib.h>

/**
 * get_nodeint_at_index - gets the nth node of a specified index
 * @head: the head node of a linked list
 * @index: the index of nth node of the listint_t node
 * Return: the nth node of a linked list
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;


	if (head == NULL)
		return (NULL);

	while (head)
	{
		if (i == index)
			return (head);
		i++;
		head = head->next;
	}
	return (NULL);
}
