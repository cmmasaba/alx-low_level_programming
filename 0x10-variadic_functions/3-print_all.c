#include "variadic_functions.h"
/**
 * print_all - prints anything
 * @format: a list of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	unsigned int i = 0, j = 0, k;
	char *str;
	const char c[] = "cifs";
	va_list va;

	va_start(va, format);
	while (format && format[i])
	{
		k = 0;
		while (c[k])
		{
			if (c[k] == format[i] && j)
			{
				printf(", ");
				break;
			} k++;
		}
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(va, int)), j = 1;
				break;
			case 'i':
				printf("%d", va_arg(va, int)), j = 1;
				break;
			case 'f':
				printf("%f", va_arg(va, double)), j = 1;
				break;
			case 's':
				str = va_arg(va, char *);
				if (!str)
				{
					printf("(nil)");
					break;
				}
				printf("%s", str), j = 1;
				break;
		} i++;
	}
	printf("\n"), va_end(va);
}
