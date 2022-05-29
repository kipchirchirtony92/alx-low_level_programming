#include "main.h"

/**
 * _islower - checks for lowercase
 * @character: character is an ascii character
 *
 * Return: 1 if lowercase
 */

int _islower(int character)
{
	if (character >= 'a' && character <= 'z')
		return (1);
	else
		return (0);
}
