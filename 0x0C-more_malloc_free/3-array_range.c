#include "main.h"

/**
 * array_range - creates an array of integers
 * @min: lower limit of the array
 * @max: upper limit of the array
 * array should contain values from min to max
 *
 * Return: pointer to the newly created array
 * if min > max return NULL
 * if malloc fails return NULL
 */

int *array_range(int min, int max)
{
	unsigned int i;
	int *a;

	if (min > max)
		return (NULL);

	a = malloc(sizeof(*ar) * ((max - min) + 1));

	if (a == NULL)
		return (NULL);

	for (i = 0; min <= max; i++, min++)
		a[i] = min;

	return (a);
}
