#include <stdio.h>

/**
 * main: print the letters of the alphabet
 *
 * description: print the letters of the alphabet in lower then in uppercase
 *
 * return: Always 0 Success
 */

int main(void)
{
	int i, j;

	i = 97;
	j = 65;

	while (i < 123)
	{
		putchar(i);
		i++;
	}

	while (j < 91)
	{
		putchar(j);
		j++;
	}

	putchar(10);

	return (0);
}
