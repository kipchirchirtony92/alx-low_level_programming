#include "main.h"

/**
 * _abs - compute the absolute value of an integer
 * Description: checks if a number is -, + or unsigned
 * @n: n is an integer
 *
 * Return: integer(-n,+n or n)
 */

int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	else if (n < 0)
	{
		return (-n);
	}
	else
	{
		return (n);
	}
}
