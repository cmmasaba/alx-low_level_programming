#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 *
 * Return: Always 0
 */

void times_table(void)
{
	int a, b, pr;

	for (a = 0; a <= 9; a++)
	{
		_putchar(48);
		for (b = 1; b <= 9; b++)
		{
			pr = a * b;
			_putchar(44);
			_putchar(32);
			if (pr <= 9)
			{
				_putchar(32);
				_putchar(pr + 48);
			}
			else
			{
				_putchar((pr / 10) + 48);
				_putchar((pr % 10) + 48);
			}
		}
		_putchar('\n');
	}
}
