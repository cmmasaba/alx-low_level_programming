#include<stdio.h>
#include<stdlib.h>
#include<time.h>

/**
 * main - generates a random number n each time the code is compiled
 * the number is then checked if it is posive, negative or zero
 * Return: 0 if no errors are found
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is negative\n", n);
	return (0);
}
