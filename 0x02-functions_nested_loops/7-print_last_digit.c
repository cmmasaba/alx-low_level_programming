#include "main.h"

/**
 * print_last_digit - prints the last digit of
 * a number
 *
 * @b: is the number whose last will be printed
 * Return: the value of the last digit
 */

int print_last_digit(int b)
{
	int a;

	a = b % (10);
	if (a < 0)
	{
		_putchar(-a + 48);
		return (-a);
	}
	else
	{
		_putchar(a + 48);
		return (a);
	}
	_putchar('\n');
}
