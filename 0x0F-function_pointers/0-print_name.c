#include <stdlib.h>
/**
 * print_name - prints a name
 * @name: argument name to be printed
 * @f: A pointer to a function that prints a string
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
