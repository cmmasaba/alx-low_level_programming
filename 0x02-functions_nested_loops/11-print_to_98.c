#include <stdio.h>

/**
 * print_to_98 -  prints all natural numbers from n to 98,
 *  followed by a new line
 *  numbers should be separated by commas followed by space
 *  first number should be number passed to you function and
 *  last number should be 98
 *
 *  @a: number passed into the function
 */

void print_to_98(int a)
{
	if (a > 98)
	{
		for (; a > 98; a--)
		{
			printf("%d, ", a);
		}
	}
	else if (a < 98)
	{
		for (; a < 98; a++)
		{
			printf("%d, ", a);
		}
	}
	printf("%d\n", a);
}
