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
	FILE *fp;
	ssize_t read_bytes;
	char *temp;

	if (!filename)
		return (0);

	fp = fopen(filename, "r");
	if (!fp)
		return (0);

	temp = malloc(sizeof(char) * letters);
	if (!temp)
	{
		fclose(fp);
		return (0);
	}
	read_bytes = fread(temp, sizeof(char), letters, fp);
	fclose(fp);

	if (!read_bytes)
	{
		free(temp);
		return (0);
	}
	read_bytes = fwrite(temp, sizeof(char), read_bytes, stdout);
	free(temp);

	if (read_bytes < 0 || (size_t)read_bytes < letters)
		return (0);

	return (read_bytes);
}
