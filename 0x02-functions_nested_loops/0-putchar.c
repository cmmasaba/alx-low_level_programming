#include "main.h"

/**
 * main - Entry point
 *
 * Return: 0 for a succefull build
 */

int main(void)
{
	char p[8] = "_putchar";
	int i = 0;

	while (i <= 8)
	{
		_putchar(p[i]);
		i++;
	}

	_putchar('\n');
	return (0);
}
