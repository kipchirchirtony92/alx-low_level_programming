#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * get_op_func - finds the operation func
 * @s: operator (+, -, /, %)
 * Return: a function pointer
 */

int (*get_op_func(char *s))(int, int)
{
	int index;

	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	index = 0;

	while (ops[index].op != NULL && *(ops[index].op) != *s)
		index++;
	return (ops[index].f);
}
