#include "main.h"

/**
 * main - peogram that copes content of a file to another file
 * @argc: number of arguments
 * @argv: argument vector
 *
 * Return: always 0
 */

int main(int argc, char **argv)
{
	int file_from, file_to, err;
	ssize_t nchar, rw;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}

	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}

	nchar = 1024;
	while (nchar == 1024)
	{
		nchar = read(file_from, buffer, 1024);
		if (nchar == -1)
		{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(99);
		}
		rw = write(file_to, buffer, nchar);
		if (rw == -1)
		{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
		}
	}

	err = close(file_from);
	if (err == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}

	return (0);

}
