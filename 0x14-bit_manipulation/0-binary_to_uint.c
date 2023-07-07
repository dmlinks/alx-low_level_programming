#include "main.h"

/**
 * binary_to_uint - A function that converts binary to unsigned int
 * @b: a pointer to the binary
 *
 * Return: An unsigned integer
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int base_t = 1;
	int i = 0;

	if (b == NULL)
		return (0);

	while (b[i + 1])
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		i++;
	}

	while (i >= 0)
	{
		result += ((b[i] - '0') * base_t);
		base_t *= 2;
		i--;
	}
	return (result);
}
