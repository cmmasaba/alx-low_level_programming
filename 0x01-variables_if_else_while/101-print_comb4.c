#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints all 3 possible combinations of 3 digits from 000 to 789
 * The three digits must be different
 * print the numbers in ascending order
 * use only putchar to print the digits
 * Return: 0 for successive build
 */

int main(void)
{
	int m, n, o;

	m = '0';
	n = '0';
	o = '0';

	while (m <= '9')
	{
		n = '0';
		while (n <= '9')
		{
			o = '0';
			while (o <= '9')
			{
				if (m != n && m != o && o != n && m < n && m < o && n < o)
				{
					putchar(m);
					putchar(n);
					putchar(o);
					if (m == '7' && n == '8' && o == '9')
						break;
					putchar(',');
					putchar(' ');
				}
				o++;
			}
			n++;
		}
		m++;
	}
	putchar('\n');
	return (0);
}
