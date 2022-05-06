#include "main.h"

/**
 * create_array - creates an array of characters
 * initializes the array with specific chaaracter
 * @size: the size of the array
 * @c: the character to initialize the array with
 *
 * Return: pointer to the array or NULL if size = 0
 */

char *create_array(unsigned int size, char c)
{
	char *s;
	int i;

	if (size == 0)
	{
		return (NULL);
	}
	s = malloc(sizeof(char) * size);
	if (s == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		s[i] = c;
	}

	return (s);
}
