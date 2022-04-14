#include "main.h"

/**
 * _isupper - checks for uppercase character
 *
 * @c: character being checked
 *
 * Return: 1 if c is uppercase, 0 for lowercase
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
