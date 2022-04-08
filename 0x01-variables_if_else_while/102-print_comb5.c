#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints numbers between 00 to 99.
 *
 * Return: 0 for successful build
 */
int main(void)
{
int m, n, o, p, a1, a2;

m = n = o = p = 48;
while (m < 58)
{
	n = 48;
	while (n < 58)
	{
		o = 48;
		while (o < 58)
		{
			p = 48;
			while (p < 58)
			{
				a1 = (m * 10) + n;
				a2 = (o * 10) + p;
				if (a1 < a2)
				{
					putchar(m);
					putchar(n);
					putchar(' ');
					putchar(o);
					putchar(p);
					if (m == 57 && n == 56 && o == 57 && p == 57)
						break;
					putchar(',');
					putchar(' ');
				}
				p++;
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
