#include "main.h"

/**
 * print_triangle - prints a triangle followed by new line
 * @size: is the size of the triangle
 * size is 0 or less then print new line
 *
 */

void print_triangle(int size)
{
	int a, b;

	for (a = 0; a < size; a++)
	{
		for (b = 1; b < (size - a); b++)
		{
			_putchar(32);
		}
		for (b--; b < size; b++)
		{
			_putchar(35);
		}
		if (a < (size - 1))
			_putchar('\n');
	}
	_putchar('\n');
}
