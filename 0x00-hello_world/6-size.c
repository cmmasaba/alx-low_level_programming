#include<stdio.h>
/**
 * main - prints the various sizes of variables
 * Return: prints 0 if no error is encountered
 */
int main(void)
{
	printf("Size of a char :%lu byte(s)\n", sizeof(char));
	printf("Size of an int :%lu byte(s)\n", sizeof(int));
	printf("Size of a long int :%lu byte(s)\n", sizeof(double));
	printf("Size of a long long int :%lu byte(s)\n", sizeof(double));
	printf("Size of a float :%lu byte(s)\n", sizeof(float));
	return (0);
}
