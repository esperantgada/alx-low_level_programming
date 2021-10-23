#include "main.h"

/**
*read_textfile - reads a text file and prints to the POSIX stdout.
* @filename: pointer to name of file.
* @letters:  number of letters it should read and print.
*
* Return: number of letters it could print or write or 0.
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int f, r, w;
	char *b;

	if (filename == NULL)
		return (0);

	l = open(filename, O_RDONLY);
	if (f == -1)
		return (0);
	b = malloc(sizeof(char) * letters + 1);
	if (b == NULL)
		return (0);
	r = read(f, b, letters);
	if (r == -1)
		return (0);

	b[letters] = '\0';

	w = write(STDOUT_FILENO, b, r);
	if (w == -1)
		return (0);

	close(f);
	free(b);
	return (w);
}
