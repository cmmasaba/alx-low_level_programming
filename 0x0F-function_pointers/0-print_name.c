#include "function_pointers.h"

/**
 * print_name - function that prints a name
 * @name: pointer to the name to be printed
 * @f: function pointer that helps print the name
 *
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
