#include  "main.h"
/**
 * print_alphabet_x10 - print alphabet 10 times
 *
 * Return: void
 */


void print_alphabet_x10(void)
{
	char letter =  'a';
	int times = 0;

	while (times < 10)
	{
		letter = 'a';

		while (letter <= 'z')
		{
			_putchar(letter);
			letter++;
		}
		_putchar('\n');

		times++;
	}
}
