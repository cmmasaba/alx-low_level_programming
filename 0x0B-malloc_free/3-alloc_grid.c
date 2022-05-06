#include "main.h"

/**
 * alloc_grid - returns a pointer to a 2 dimensional array
 * and initializes each element to 0
 * @width: size of array columns
 * @height: size of array rows
 * Return: pointer to the array, NULL if it fails, NULL if
 * width or height is 0 or negative
 */

int **alloc_grid(int width, int height)
{
	int ar;
	int i, j;

	if (height < 1 || width < 1)
		return (NULL);

	ar = malloc(sizeof(int) * height);
	if (ar == NULL)
	{
		free(ar);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		ar[i] = malloc(sizeof(int) * width);
		if (ar[i] == NULL)
		{
			for (; i >= 0; i--)
				free(ar[i]);
			free(ar);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			ar[i][j] = 0;

	return (ar);
}
