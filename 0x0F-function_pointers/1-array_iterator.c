#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter
 * on each element of the array
 * @array: the array on which the execution will be done
 * @size: the size of the array
 * @action: pointer to the helper function
 *
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && action)
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
}
