#include "main.h"

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes of second string to be concatenated
 * if n is greater than length of s2 then use entire string s2
 * if NULL is passed treat it as an empty string
 *
 * Return: pointer to the new memoer location with the concatenated strings
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i, j, k, length;
	char *str;

	if (s1 == '\0')
		s1 = " ";
	if (s2 == '\0')
		s2 = " ";

	while (s1 != '\0')
		i++;
	while (s2 != '\0')
		j++;
	if (n > j)
		n = j;

	length = i + n + 1;

	str = malloc(length);
	if (str == NULL)
		return (0);

	for (k = 0; k < length; k++)
	{
		if (k < i)
			str[k] = s1[k];
		else
			str[k] = s2[k - i];
	}

	str[k] = '\0';

	return (str);
}
