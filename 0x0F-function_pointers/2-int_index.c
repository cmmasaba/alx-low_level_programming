#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: the array in which the integer is searched
 * @size: the number of elements in the array
 * @cmp: a helper function that searches for the integer depending on the
 * search condition
 *
 * Return: index of first element for which cmp does not return 0
 * -1 if no search is found 1 if size is less than or equal to zero
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i, j;

	if (array && cmp)
	{
		if (size <= 0)
			return (-1);
		for (i = 0; i < size; i++)
		{
			j = cmp(array[i]);
			if (j > 0)
				return (i);
		}
	}

	return (-1);
}
