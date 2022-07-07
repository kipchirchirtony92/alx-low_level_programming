#include "lists.h"
/**
 * add_dnodeint_end - Adds a new node at the end of a dllist
 * @head: a pointer to the head of a dllist
 * @n: the data n for the new element
 * Return: if function fails = NULL
 *         otherwise return the address of the new node/element
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newNode, *temp;

	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;

	if (*head == NULL)
	{
		newNode->prev = NULL;
		*head = newNode;
		return (newNode);
	}

	temp = *head;

	while (temp->next != NULL)
		temp = temp->next;

	temp->next = newNode;
	newNode->prev = temp;

	return (newNode);
}
