#include "main.h"

/**
 * print_square -  prints a squre of size n made up of "#" characters.
 * @size: size -  the size of the square
 * Return: void
 */
void print_square(int size)
{
	int x, y;

	if (size > 0)
	{
		for (x = 1; x <= size; x++)
		{
			for (y = 1; y <= size; y++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
