#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of the dllist
 * @head: a pointer to the first node/element of the dllist
 * @n: data for the new element/node
 * Return: if failed = NULL
 *         otherwise = address of the new element
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode;

	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = (*head);
	newNode->prev = NULL;

	if ((*head) != NULL)
	{
		(*head)->prev = newNode;
	}

	(*head) = newNode;
	return (newNode);
}
