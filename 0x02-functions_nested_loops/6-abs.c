#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @a: the value being tested
 * Return: the absolut value
 */

int _abs(int a)
{
	if (a >= 0)
		return (a);
	else
		return (a * -1);
}
