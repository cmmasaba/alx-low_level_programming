#include "main.h"

/**
 * main - Entry point
 *
 * Return: 0 for a succefull build
 */

int main(void)
{
	char p[8] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(p[i]);
	}
	_putchar('\n');
	return (0);
}
