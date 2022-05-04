#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: string to be printed
 *
 */

void puts_half(char *str)
{
	int len, index, middle;

	index = 0;
	len = 0;
	while (str[index++])
		len++;
	if ((len % 2) == 0)
		middle = len / 2;
	else
		middle = (len + 1) / 2;
	for (index = middle; index < len; index++)
		_putchar(str[index]);
	_putchar('\n');
}
