#include "variadic_functions.h"

/**
 * sum_them_all - sums all its parameters
 * @n: the number of parameters passed to it
 *
 * Return: sum of its parameters, ) if n == 0
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum = 0;
	va_list va;

	va_start(va, n);
	if (n == 0)
		return (0);

	for (i = 0; i < n; i++)
		sum += va_arg(va, int);

	va_end(va);
	return (sum);
}
