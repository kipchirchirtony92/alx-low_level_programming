#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - function that dynamically creates an array and return
 *                a pointer, array is also initialized by char c
 * @c: character value to initialize the array
 * @size: size of the array
 * Return: character pointer of the base address of the array.
 */


char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int index;

	if (size == 0)
		return (NULL);

	array = malloc(sizeof(char) * size);

	if (array == NULL)
		return (NULL);

	for (index = 0; index < size; index++)
		array[index] = c;

	return (array);
}
