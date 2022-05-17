#include "function_pointers.h"

/**
 * main - a program that prints the opcodes of its own main function
 * @argc: number of arguments
 * @argv: character pointer to the arguments
 *
 * Return: 0 always
 */

int main(int argc, char **argv)
{
	char *op = (char *)main;
	int i, n;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	n = atoi(argv[1]);

	if (n < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < n; i++)
	{
		printf("%02x", op[i] & 0xFF);
		if (i != n - 1)
			printf(" ");
	}

	printf("\n");
	return (0);
}
