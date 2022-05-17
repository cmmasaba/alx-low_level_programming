#include "variadic_functions.h"

/**
 * print_strings - prints strings
 * @separator: the string to be printed between the strings
 * @n: number of strings passed to the function
 * prints new line at the end of the function
 * if one of the strings is NULL print (nil)
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list va;
	char *str;

	va_start(va, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(va, char *);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);
		if (separator && (i < n - 1))
			printf("%s", separator);
	}

	printf("\n");
	va_end(va);
}
