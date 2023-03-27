#include "main.h"

/**
 * _strlen - a fuction that return the length of a string
 * @s: an input string
 * Return: Nothing
 */
int _strlen(char *s)
{
	int a = 0;

	while (s[a] != '\0')
		a++;

	return (a);
}
