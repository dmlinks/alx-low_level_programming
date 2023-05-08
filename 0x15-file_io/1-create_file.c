#include "main.h"

/**
 * len - Length of string
 * @s: string
 *
 * Return: Number of charcter in string
 */

int len(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}

/**
 * create_file - creates a file
 * @filename: name of the file to create
 * @text_content: string to write to the file
 *
 * Return: 1 or -1 (int)
 */

int create_file(const char *filename, char *text_content)
{
	int open_file;
	int content_lent;

	if (!filename)
		return (-1);

	if (text_content)
		content_lent = len(text_content);

	open_file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (open_file == -1)
		return (-1);

	write(open_file, text_content, content_lent);
	close(open_file);
	return (1);
}
