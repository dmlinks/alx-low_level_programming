#include "main.h"

/**
 * _strcpy - A function that copies the string pointed to the src,
 * including the terminating null byte (\_0),
 * to the buffer pointed to the dest.
 *
 * @dest: A pointer to destination of string
 * @src: A pointer to source string to copy from
 *
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int a = 0;
	int b = 0;

	while ((*src + a) != '\0' )
		a++;

	for (; b < a; b++)
		dest[b] = src[b];

	dest[a] = '\0';
	return (dest);
}
