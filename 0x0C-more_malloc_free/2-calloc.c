#include "main.h"

/**
 * _calloc - allocates memory for an array
 * @nmemb: number of elements in the array
 * @size: bytes of each element
 * the memory is set to 0
 *
 * Return: a pointer to the allocated memory
 * if nmemb or size is 0 function returns NULL
 * if malloc fails, function returns NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int i;
	char *str;

	if (nmemb == 0 || size == 0)
		return (0);

	str = malloc(nmemb * size);
	if (str == NULL)
		return (0);

	for (i = 0; i < (size * nmemb); i++)
		str[i] = 0;

	return (str);
}
