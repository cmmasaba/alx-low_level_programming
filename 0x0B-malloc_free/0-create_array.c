#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of characters
 * initializes the array with specific chaaracter
 * @size: the size of the array
 * @cr: the character to initialize the array with
 *
 * Return: pointer to the array or NULL if size = 0
 */

char *create_array(unsigned int size, char c)
{
	char *cr;
	unsigned int i;

	if (size == 0)
		return (NULL);

	cr = malloc(sizeof(c) * size);

	if (cr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		cr[i] = c;

	return (cr);
}
