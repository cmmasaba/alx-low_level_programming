#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the alphabet in lower case then in upper case
 * only putchar can be used to write the string
 * Return: 0 if no error is encountered
 */
int main(void)
{
	char ALP, alp;

	for (alp = 'a'; alp <= 'z'; alp++)
		putchar(alp);

	for (ALP = 'A'; ALP <= 'Z'; ALP++)
		putchar(ALP);

	putchar('\n');
	return (0);
}
