#include <stdio.h>
/**
 * main - prints alphabet letters in lower case
 * only putchar should be used to write the string
 *Return: 0 if no errors are encountered
 */
int main(void)
{
	char alp;

	for (alp = 'a'; alp <= 'z'; alp++)
		putchar(alp);

	return (0);
}
