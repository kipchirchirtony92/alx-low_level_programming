#include "main.h"
#include  <stdlib.h>

/**
 * _strdup - Return a pointer to a newly allocated space in memory containing a
 *           string that is given as parameter
 * @str: the string to  be copied
 * Return: if str == NULL or if insufficient space return null otherwise return
 *          pointer to the duplicated string.
 */


char *_strdup(char *str)
{
	char *duplicate;
	int i = 0;
	int len = 0;

	if (str == NULL)
		return (NULL);

	while (str[i])
	{
		len++;
		i++;
	}

	duplicate = malloc(sizeof(char) * (len + 1));
	if (duplicate != NULL)
	{
		for (i = 0; str[i]; i++)
			duplicate[i] = str[i];
		duplicate[len] = '\0';
	}
	return (duplicate);
}
