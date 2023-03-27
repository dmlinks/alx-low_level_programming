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
	char *aux = dest;

	while (*src)
		*dest++ = *src++;

	return (aux);
}
