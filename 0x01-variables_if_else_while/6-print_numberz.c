#include <stdio.h>
/**
 * main - prints all single digit numbers of base 10 from 0 to 9
 * use only putchar, dont use variable of type char
 * Return: 0 if no error is encountered
 */
int main(void)
{
	int n = 0;

	do {
		putchar(n);

	} while (n < 10);

	putchar('\n');
	return (0);
}
