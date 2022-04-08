#include <stdio.h>
/**
 * main - print letters of alphabet in lowercase
 * do not print e and q
 * only use putchar to print the string
 * Return: 0 if no error is encountered
 */
int main(void)
{
	char alp;

	for (alp = 'a'; alp <= 'z'; alp++)
		if (!(alp == 'e' || alp == 'q'))
			putchar(alp);

	putchar('\n');
	return (0);
}
