#include "main.h"

/**
 * rev_string - A function that reverse a string
 * @s: An input string
 * Return: Nothing
 */
void rev_string(char *s)
{
	int len;
	int i;
	char aux;

	len = 0;
	i = 0;

	while (s[len] != '\0')
		len++;

	while (i < len--)
	{
		aux = s[i];
		s[i++] = s[len];
		s[len] = aux;
	}
}
