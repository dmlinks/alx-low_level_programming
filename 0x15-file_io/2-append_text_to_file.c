#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: A pointer to the name of the file.
 * @text_content: The string to add to the end of the file.
 *
 * Return: If the function fails or filename is NULL - -1.
 *	If the file does not exist the user lacks write permissions - -1.
 *	If text_content is NULL, do not add anything to the file.
 *	Return 1 if the file exists and
 *	-1 if the file does not exist or
 *	if you do not have the required permissions to write the file
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int opn, wrte, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	opn = open(filename, O_WRONLY | O_APPEND);
	wrte = write(opn, text_content, len);

	if (opn == -1 || wrte == -1)
		return (-1);

	close(opn);

	return (1);
}
