#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - prints numbers to 98
 * @num: starting integer
 *
 * Description: prints all natural number from num - 98
 *
 * Return: void
 */

void print_to_98(int num)
{
	if (num < 98)
	{
		while (num < 98)
		{
			printf("%d, ", num);
			num++;
		}
	}
	else if (num > 98)
	{
		while (num > 98)
		{
			printf("%d, ", num);
			num--;
		}
	}
	printf("98\n");
}
