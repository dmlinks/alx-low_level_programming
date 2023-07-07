#include "main.h"

/**
 * clear_bit - A function that sets the value of a bit to 0
 * @n: an input integer to check
 * @index: position to change in n to 0
 *
 * Return: 1 if it worked and -1 if an error occured
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int m = 1;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	m <<= index;
	m = ~m;

	*n &= m;

	return (1);
}
