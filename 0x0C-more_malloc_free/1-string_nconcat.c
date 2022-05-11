#include "main.h"
#include <stdlib.h>

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
	unsigned int i, j, k, length;
	char *s;

	if (s1 == '\0')
		s1 = "";
	if (s2 == '\0')
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;

	if (n > j)
		n = j;

	length = i + n + 1;

	s = malloc(length);

	if (s == NULL)
		return (0);

	for (k = 0; k < length - 1; k++)
	{
		if (k < i)
			s[k] = s1[k];
		else
			s[k] = s2[k - i];
	}

	s[k] = '\0';

	return (s);
}
