#include <stdio.h>
/**
 * main -  prints letters of the alphabet in reverse and in lower case
 * only allowed to use putchar
 * Return: 0 if no error is encountered
 */
int main(void)
{
	char alp;

	for (alp = 'z'; alp >= 'a'; alp--)
		putchar(alp);

	putchar('\n');
	return (0);
}
