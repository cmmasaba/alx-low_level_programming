#include <stdio.h>
/**
 * main - prints all possible combinations of single digit numbers
 * use only putchar and do not use char variable type
 * Return: 0 if no error is encountered
 */
int main(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);
		if (n != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');
	return (0);
}
