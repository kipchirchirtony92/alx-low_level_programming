#include "lists.h"
#include <string.h>

/**
 * add_node_end - adds a new node ata the end of a list_t list
 * @head: a pointer to the head of the list_t list
 * @str: a string to be added as data to the list_t node
 * Return: return a pointer to the address of new node
 *         otherwie returns NULL of failed
 */


list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *last;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	if (str == NULL)
	{
		free(new);
		return (NULL);
	}

	new->str = strdup(str);
	new->len = strlen(str);
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		last = *head;

		while (last->next != NULL)
			last = last->next;

		last->next = new;
	}
	return (*head);
}
