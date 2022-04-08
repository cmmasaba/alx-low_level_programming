#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - generates a random number n
 * the last digit of n is computed
 * prints if the last digit is 5, or 0 or less than 6 and not 0
 * Return: 0 if no error is encountered
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	ld = n % 10;
	if (ld > 5)
		printf(
		"Last digit of %d is %d and is greater than 5\n", n, ld);
	else if (ld == 0)
		printf("Last digit of %d is %d and is 0\n", n, ld);
	else
		printf(
		"Last digit of %d is %d and is less than 6 and not 0\n", n, ld);
	return (0);
}
