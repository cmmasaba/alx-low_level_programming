#include <stdio.h>
/**
 * main - prints all single digit numbers of base 10 starting from 0
 * Return: 0 if no errors are encountered
 */
int main(void)
{
	int n = 0;

	do {
		printf("%d", n);
		n++;
	} while (n < 10);

	printf("\n");
	return (0);
}
