#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: the number to be checked
 * @index: the index of the bit to be checked
 *
 * Return: value of the bit at the index or -1 on failure
 */

int get_bit(unsigned long int n, unsigned index)
{
	unsigned int i;

	if (n == 0 && index < 64)
		return (0);

	for (i = 0; i <= 63; n >>= 1, i++)
	{
		if (index == i)
			return (n & 1);
	}
	return (-1);
}
