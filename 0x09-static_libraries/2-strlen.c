#include <stdio.h>

/**
 * _strlen - finds the lenght of a string
 *
 *@s: string (char array)
 *
 * Return: length of a string
 */


int _strlen(char *s)
{
	int len;
	int i;

	len = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		len++;
	}
	return (len);
}
