#include "main.h"
/**
 * _islower - checks for lowercase character
 * c is character to be checked in ASCII code
 *@c: ASCII code representation of the character
 * Return: 1 for lowercase characters, 0 for the rest
 */

int _islower(int c)
{
	if (c <= 122 && c >= 97)
		return (1);
	else
		return (0);
	_putchar('\n');
}
