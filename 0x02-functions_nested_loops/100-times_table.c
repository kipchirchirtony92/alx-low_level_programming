#include "main.h"

/**
 * print_times_table - prints the times table
 * @num: prints the timetable for num
 * Description: prints the times table of num
 * Return: void
 */

void print_times_table(int num)
{
	int row, column, product;

	if (num >= 0 && num < 15)
	{
		for (row = 0; row <= num; row++)
		{
			for (column = 0; column <= num; column++)
			{
				product = row * column;

				if (column == 0)
					_putchar('0');
				else if (product < 10)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(product % 10 + '0');
				}
				else if (product >= 10 && product < 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar((product / 10) % 10 + '0');
					_putchar(product % 10 + '0');
				}
				else if (product > 99 && product < 1000)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(product / 100 + '0');
					_putchar((product / 10) % 10 + '0');
					_putchar(product % 10 + '0');
				}
			}
			_putchar('\n');
		}
	}
}
