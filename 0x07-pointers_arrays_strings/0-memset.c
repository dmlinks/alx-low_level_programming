#include "main.h"

/**
 * _memset - fills the first n bytes of the memory area pointed by s
 * with a constant byte b
 * @s: location to fill
 * @b: char to fill s with
 * @n: number of bytes to fill with
 * Return: Pointer to memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *str = s;

	while (n--)
	{
		*s = b;
		s++;
	}
	return (str);
}
