#include "main.h"

/**
 * _strspn - a function that gets the length of a prefix substring
 * @s: string to search in
 * @accept: an input string to search
 * Return: Number of bytes in the inital segment of s contained in accept
 */
unsigned int _strspn(char *s, char *accept)
{
	char *b = accept;
	int count = 0;

	while (*s)
	{
		int found = 0;

		while (*accept)
		{
			if (*accept == *s)
			{
				count++;
				found = 1;
				break;
			}
			accept++;
		}
		s++;
		accept = b;
		if (found == 0)
			break;
	}
	return (count);
}
