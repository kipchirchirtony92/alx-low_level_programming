#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - sum of two num
 * @a: 1st int
 * @b: 2nd int
 * Return: sum of the 1st and 2nd int
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtraction of two num
 * @a: 1st int
 * @b: 2nd int
 * Return: difference btw the two int
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - product of two numbers
 * @a: 1st integer
 * @b: 2nd integer
 * Return: product for 2 int
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - quotient of 2 int
 * @a: 1st int dividend
 * @b: 2nd int divisor
 * Return: quotient int
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - modulo (remainder)
 * @a: 1st integer (dividend)
 * @b: 2nd integer (divisor)
 * Return: remainder of division (integer)
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
