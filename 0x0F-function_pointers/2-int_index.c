#include "function_pointers.h"

/**
 * int_index - Searches for an integer in an array of integers.
 * @array: The array of integers.
 * @size: The size of the array.
 * @cmp: A functional pointer to the cmp function
 *
 * Return: If no element matches or size <= 0 return -1.
 *         Otherwise - The index of the first element for which
 *                     the cmp function does not return 0.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
		return (-1);
	else if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
