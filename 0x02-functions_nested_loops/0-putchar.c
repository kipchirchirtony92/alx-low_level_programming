#include "main.h"

/**
 * main - prints _putchar
 * Description: prints a string "_putchar"
 * Return: Always 0 (Success)
 */

int main(void)
{
	char txt[9] = "_putchar";
	int j = 0;

	for (j = 0; j < 8; j++)
	{
		_putchar(txt[j]);
	}
	_putchar('\n');

	return (0);
}
