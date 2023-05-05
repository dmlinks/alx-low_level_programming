#include "main.h"

/**
 * binary_to_uint - A function that converts a binary to an unsigned int
 * @b: A pointer to the string containning the binary number
 *
 * Return: unsinged integer converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;

	if (b == NULL)
		return (0);

	for (; *b != '\0'; b++)
	{
		if (*b != '0' && *b != '1')
			return (0);
		result <<= 1;
		if (*b == '1')
			result += 1;
	}

	return (result);
}
