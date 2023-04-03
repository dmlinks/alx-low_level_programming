#include "main.h"
#include <stdio.h>

/**
 * _strchr - Returns a pointer to the first occurrence of the char c
 * in a string s, or NULL if char not found
 * @s: string to search in
 * @c: char to find in s
 * Return: pointer to first occurrence or null
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (c == *s)
			return (s);
	return (NULL);
}
