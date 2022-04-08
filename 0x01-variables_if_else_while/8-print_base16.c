#include <stdio.h>
/**
 * main - print all base 16 numbers in lower case
 * use only putchar
 * Return: 0 if no error is encountered
 */
int main(void)
{
	int hx;

	for (hx = '0'; hx <= '9'; hx++)
		putchar(hx);

	for (hx = 'a'; hx <= 'f'; hx++)
		putchar(hx);

	putchar('\n');
	return (0);
}
