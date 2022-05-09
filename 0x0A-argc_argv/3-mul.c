#include <stdio.h>
#include <stdlib.h>

/**
 * main - calculates multiplication of arguments
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 1 if program does not receive 2 arguments, 0 if successful
 */

int main(int argc, char *argv[])
{
	if (argc <= 2 || argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	}
	return (0);
}
