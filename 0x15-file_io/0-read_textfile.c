#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the
 * POSIX standard output
 * @filename: name of the file to be read
 * @letters: numbers of letters to read and print
 *
 * Return: number of letters it could read and print,
 * 0 if file cannot be opened or read of if filename is NULL
 * or if write does not write expected number of bytes
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd1;
	ssize_t r, w;
	char *buffer;

	if (!filename)
		return (0);

	fd1 = open(filename, O_RDONLY);
	if (fd1 == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (!buffer)
		return (0);

	r = read(fd1, buffer, letters);
	w = write(STDOUT_FILENO, buffer, r);

	close(fd1);
	free(buffer);

	return (w);
}
