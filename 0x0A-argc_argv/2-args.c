#include <stdio.h>

/**
 * main - prints all arguments received
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: success(always 0)
 */

int main(int argc, char *argv[])
{
	int i;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
