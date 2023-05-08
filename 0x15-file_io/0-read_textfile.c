#include "main.h"


/**
 * read_textfile - A function that reads a text file and prints
 * to the POSIX Standard Output
 * @filename: The filename to open
 * @letters: The number of letters to read and print
 *
 * Return: The number of letters read and printed, or 0 on failure
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t rite, red, fp;
	char *temp;

	fp = open(filename, O_RDONLY);
	if (fp == -1)
		return (0);

	temp = malloc(sizeof(char) * letters);
	red = read(fp, temp, letters);
	rite = write(STDOUT_FILENO, temp, red);

	free(temp);
	close(fp);

	return (rite);
}
