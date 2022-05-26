#include "lists.h"
#include <stdlib.h>


/**
 * free_listint2 - frees a listint_t list
 * @head: a pointer to the address of the head of listint_t list
 * Description: sets the head to NULL
 */

void free_listint2(listint_t **head)
{
	listint_t *next;
	listint_t *current = *head;

	if (current == NULL)
		return;
	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}

	*head = NULL;
}
