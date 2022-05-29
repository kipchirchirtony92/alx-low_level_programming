#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @letter: letter is an ascii character
 *
 * Return: 1 if alphabetic letter
 */

int _isalpha(int letter)
{
	if (letter >= 'a' && letter <= 'z')
	{
		return (1);
	}
	else if (letter >= 'A' && letter <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
