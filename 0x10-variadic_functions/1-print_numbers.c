#include "variadic_functions.h"

/**
 * print_numbers - prints numbers
 * @separator: string to be prited between the numbers
 * @n: number of integers passed to the function
 * prints new line at end of the function
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i, num;
	va_list va;

	va_start(va, n);

	for (i = 0; i < n; i++)
	{
		num = va_arg(va, int);
		printf("%d", num);
		if (separator != NULL && (i <= n - 1))
			printf("%s", separator);
	}
	printf("\n");
	va_end(va);
}
