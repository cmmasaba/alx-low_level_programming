#include "main.h"

/**
 * argstostr - concatenates all arguments of your program
 * each argument should be followed by a new line
 * @ac: number of arguments to your program
 * @av: the arguemnts
 *
 * Return: pointer to a new string, NULL if ac == 0 or av == 0
 */

char *argstostr(int ac, char **av)
{
	char *s;
	int i, j, k, l;

	if (ac == 0)
		return (NULL);
	for (i = j = 0; j < ac; j++)
	{
		if (av[j] == NULL)
			return (NULL);

		for (k = 0; av[j][k] != '\0'; j++)
			i++;
		i++;
	}

	s = malloc(sizeof(char) * (i + 1));

	if (s == NULL)
	{
		free(s);
		return (NULL);
	}

	for (j = k = l = 0; l < i; k++, l++)
	{
		if (av[j][k] == '\0')
		{
			s[l] = '\n';
			j++;
			l++;
			k = 0;
		}
		if (l < i - 1)
			s[l] = av[j][k];
	}
	s[l] = '\0';

	return (s);
}
