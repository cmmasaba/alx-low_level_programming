#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: number of times the character \ is printed
 * end with a new line
 */

void print_diagonal(int n)
{
	int a, b;

	for (a = 0; a < n; a++)
	{
		for (b = 0; b < a; b++)
		{
			_putchar(32);
		}
		_putchar(92);
		if (a < (n - 1))
			_putchar('\n');
	}
	_putchar('\n');
}
