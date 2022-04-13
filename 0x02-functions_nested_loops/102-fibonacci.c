#include <stdio.h>

/**
 * main - prints Fibonacci numbers,the first 50, starting with 1 and 2
 * Return: Always 0 success
 */

int main(void)
{
	long int sum;
	long int first, second;
	int count;

	sum, first, count = 0;
	second = 1;

	while (count < 49)
	{
		sum = first + second;
		printf("%li, ", sum);
		first = second;
		second = sum;

		count++;
	}
	sum = first + second;
	printf("%li\n", sum);

	return (0);
}
