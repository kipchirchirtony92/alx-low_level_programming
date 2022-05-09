#include <stdio.h>

/**
 * main - prints the number of arguments passsed into it
 *@argc: argument counter, the number of arguments passed into it
 *@argv: an array of char pointer to command line arguments
 *Return: success(always 0)
 */

int main(int argc, char __attribute__((unused)) *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
