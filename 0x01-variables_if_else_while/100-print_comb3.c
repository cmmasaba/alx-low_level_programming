#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints all possible combinations of 2 digits from 0 to 89
 * the two digits must be different
 * print in ascending order
 * only use putchar
 *
 * Return: 0 for successful build
 */

int main(void)
{
	int n, m;

	m = '0';
	n = '0';

	while (m <= '9')
	{
		n = '0';
		while (n <= '9')
		{
			if (m != n && m < n)
			{
				putchar(m);
				putchar(n);
				if (m == '8' && n == '9')
					break;
				putchar(',');
				putchar(' ');
			}
			n++;
		}
		m++;
	}
	putchar('\n');
	return (0);
}
