#include "main.h"

/**
 *  print_line - draws a straight line in the terminal
 *  @n: number of times the character is printed
 *  end with a new line
 *
 *  n is less than 0 print new line
 */

void print_line(int n)
{
	int a;

	for (a = 0; a < n; a++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
