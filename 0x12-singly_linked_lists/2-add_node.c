#include "lists.h"

/**
 * _strlen - return the length of the string
 * @s: string
 * Return: length of the string
 */

int _strlen(const char *s)
{
	int len = 0;

	while (s[len])
		len++;
	return (len);
}


/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: a pointer to the head of a linked list
 * @str: string to be added as data to newly created node
 * Return: address of the head
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	new->len = _strlen(str);
	new->next = *head;
	*head = new;

	return (*head);
}
