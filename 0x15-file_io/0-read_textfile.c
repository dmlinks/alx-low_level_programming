#include "main.h"

/**
 * read_textfile - a function that reads a text file and
 *			prints it to the POSIX standard output
 * @filename: a pointer to the file location
 * @letters: szie of the text to print in size_t
 *
 * Return: the actual number of letters it could read and print
 *	if the file can not be opened or read, return 0
 *	if filename is NULL return 0
 *	if write fails or does not write the expected amount of bytes, return 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *tmp;
	ssize_t fopen;
	ssize_t rite;
	ssize_t red;

	fopen = open(filename, O_RDONLY);
	if (fopen == -1)
		return (0);
	tmp = malloc(sizeof(char) * letters);
	red = read(fopen, tmp, letters);
	rite = write(STDOUT_FILENO, tmp, red);

	free(tmp);
	close(fopen);
	return (rite);
}
