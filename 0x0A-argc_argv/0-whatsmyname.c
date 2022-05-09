#include <stdio.h>

/**
 * main - a function that prints the name of the program
 *        followed by a new line
 *@argc: argument counter, the number of command line arguments in argv array
 *@argv: argument vector, an array char pointers to command line arguments
 *Return: success (always 0)
 */

int main(__attribute__((unused)) int argc, char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
