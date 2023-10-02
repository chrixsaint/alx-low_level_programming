#include "main.h"
/**
 * read_textfile - function that reads a text file and prints
 * it to the POSIX standard output
 *
 * @filename: filename (string pointer)
 * @letters: number of letters printed
 * Return: number of letters printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int pld;
	ssize_t nrd, nwr;
	char *bufferr;

	if (!filename)
		return (0);

	pld = open(filename, O_RDONLY);

	if (pld == -1)
		return (0);

	bufferr = malloc(sizeof(char) * letters);
	if (bufferr == NULL)
		return (0);

	nrd = read(pld, bufferr, letters);
	nwr = write(STDOUT_FILENO, bufferr, nrd);

	close(pld);
	free(bufferr);

	return (nwr);
}
