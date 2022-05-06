#include "main.h"

/**
 * freegrid - frees an array
 * @grid: array
 * @height: size of array rows
 *
 */

void freegrid(char **grid, int height)
{
	if (grid != NULL && height != 0)
	{
		for (; height > 0; height--)
			free(grid[height]);
		free(grid[height]);
		free(grid);
	}
}

/**
 * strtow - splits a string into words
 * each elemnt of the array should contain a single word
 * @str: the string
 *
 * Return: pointer to an array of strings, NULL if str == NULL or str ++ ""
 */

char **strtow(char *str)
{
	char **s;
	int height, i, j, k, l;

	if (str == NULL || *str == '\0')
		return (NULL);
	for (i = height = 0; str[i] != '\0'; i++)
		if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
			height++;
	s = malloc((height + 1) * sizeof(char *));
	if (s == NULL || height == 0)
	{
		free(s);
		return (NULL);
	}
	for (j = l = 0; j < height; j++)
	{
		for (i = l; str[i] != '\0'; i++)
		{
			if (str[i] == ' ')
				l++;
			if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
			{
				s[i] = malloc((i - l + 2) * sizeof(char));
				if (s[i] == NULL)
				{
					freegrid(s, j);
					return (NULL);
				}
				break;
			}
		}
		for (k = 0; l <= i; l++, k++)
			s[j][k] = str[l];
		s[j][k] = '\0';
	}
	s[j] = NULL;
	return (s);
}
