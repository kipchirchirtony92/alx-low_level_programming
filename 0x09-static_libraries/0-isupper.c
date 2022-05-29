#include "main.h"

/**
 * _isupper - checks if a character is uppercase or lowercase
 *@c : character parameter
 * Return: returns 1 if uppercase and 0if lowercase
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
