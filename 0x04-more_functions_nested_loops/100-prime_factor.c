#include "main.h"

/**
 * main - finds and prints the largest prime factor of the number
 * followed by a new line
 *
 * Return: 0 Always successful
 */

int main(void)
	long int a, b;

	a = 612852475143;
	for (b = 2; b <= a; a++)
	{
		if (a % b == 0)
		{
			a /= b;
			b--;
		}
	}
	printf("%ld\n", b);
	return (0);
}
