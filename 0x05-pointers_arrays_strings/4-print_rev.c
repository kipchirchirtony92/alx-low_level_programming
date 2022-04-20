#include <stdio.h>
#include "main.h"

/**
 * print_rev - prints string in reverse
 *
 * @s: str param to be printed in reverse
 */
int _strlen(char *s);

void print_rev(char *s)
{
	int len = _strlen(s);
	while (len >= 0)
	{
		_putchar(s[len]);
		len--;
	}
	_putchar('\n');
}

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
