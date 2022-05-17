#include "variadic_functions.h"

/**
 * print_numbers - prints numbers
 * @separator: string to be prited between the numbers
 * @n: number of integers passed to the function
 * prints new line at end of the function
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list va;

	va_start(va, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(valist, int));
		if (separator && i < n - 1)
			printf("%s", separator);
	}

	printf("\n");
	va_end(va);
}
