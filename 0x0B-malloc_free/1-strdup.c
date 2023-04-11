#include "main.h"
#include <stdlib.h>

/**
 * _strdup - A function that returns a pointer to a newly allocated space
 * in memory, which contains a copy of the sting
 * given as a parameter
 * @str: An input pointer of the string to copy
 * Return: A pointer to new string or NULL if it str is NULL
 */
char *_strdup(char *str)
{
	char *new_str;
	int i;
	int len;

	i = 0;
	len = 0;

	if (str == NULL)
		return (NULL);

	while (str[len] != '\0')
		len++;

	new_str = malloc(sizeof(char) * (len + 1));

	if (new_str == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
		new_str[i] = str[i];

	return (new_str);
}
