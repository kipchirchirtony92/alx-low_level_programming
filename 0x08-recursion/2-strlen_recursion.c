#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s : base pointer a string
 * Return: length of a string
 */


int _strlen_recursion(char *s)
{
	unsigned int len;

	len = 0;

	if (*s)
	{
		len++;
		len += _strlen_recursion(s + 1);
	}
	return (len);
}
