#include "main.h"

/**
 * _strcat - function to concentate two string
 * @dest: an input string
 * @src: an input string
 * Return: a pointer to the resulting sting
 */
char *_strcat(char *dest, char *src)
{
	char *temp = dest;

	while (*dest)
		dest++;

	while (*src)
	{
		*dest++ = *src++;
	}
	*dest = '\0';
	return (temp);
}
