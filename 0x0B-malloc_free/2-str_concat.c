#include "main.h"
#include <stdlib.h>

/**
 * str_concat - A function that concatenates two strings
 * @s1: An input pointer of the first string
 * @s2: An input pointer of the second string
 * Return: Apointer to concatened strings or NULL if it str is NULL
 */
char *str_concat(char *s1, char *s2)
{
	int len1 = 0, len2 = 0, i = 0, j = 0;
	char *new_str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;
	new_str = malloc((len1 + len2 + 1) * sizeof(char));
	if (new_str == NULL)
		return (NULL);
	while (s1[i] != '\0')
	{
		new_str[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		new_str[i + j] = s2[j];
		j++;
	}
	new_str[i + j] = '\0';
	return (new_str);
}
