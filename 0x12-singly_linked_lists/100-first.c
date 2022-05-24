#include "lists.h"

/**
 * first - prints a string before main function is executed
 */

void first(void) __attribute__ ((constructor))
{
	printf("You're beat! and yet, you must allow");
	printf(",\nI bore my house upon my back!\n");
}
