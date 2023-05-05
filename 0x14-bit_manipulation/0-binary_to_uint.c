#include "main.h"

/**
 * binary_to_uint - A function that converts a binary to an unsigned int
 * @b: A pointer to the string containning the binary number
 *
 * Return: unsinged integer converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int base = 1, result = 0;
	int i;

	if (b == NULL)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
	}

	for (i = i - 1; i >= 0; i--)
	{
		if (b[i] == '1')
			result += base;
		base *= 2;
	}

	return (result);
}
