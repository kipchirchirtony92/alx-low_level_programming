#include "main.h"
#define NULL 0

/**
 * _strchr - locates a character in a string
 * @s: string
 * @c: character to search
 * Return: pointer to first occurrence of c
 */


char *_strchr(char *s, char c)
{
	int index;

	for (index = 0; *(s + index) != '\0'; index++)
	{
		if (*(s + index) == c)
			return (s + index);
	}
	return (NULL);
}
