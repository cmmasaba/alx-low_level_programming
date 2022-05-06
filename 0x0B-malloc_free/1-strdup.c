#include "main.h"

/**
 * _strdup - duplicates a string given to it as a parameter
 * @str: the string duplicated
 *
 * Return: pointer to the duplicated string or NULL on failure
 */

char *_strdup(char *str)
{
	char *s;
	int i, j;

	for (i = 0; str[i] != "\0"; i++)
		;

	s = (char *)malloc(sizeof(char) * (i + 1));

	if (s == NULL)
	{
		return (NULL);
	}

	for (j = 0; j <= i; j++)
	{
		s[j] = str[j];
	}
	return (s);
}
