#include "main.h"

/**
 * _memcpy - copies n bytes from memory area src to memory area dest
 * @dest: destination memory area
 * @src: source memory area
 * @n: number of bytes to fill
 * Return: pointer to dest memory source
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *a = dest;

	while (n--)
		*dest++ = *src++;

	return (a);
}
