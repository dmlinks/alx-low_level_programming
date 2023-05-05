#include "main.h"

/**
 * clear_bit - A function that sets a bit to 0 at given index
 * @n: The number to set bit in
 * @index: The index to set bit at
 *
 * Return: 1 if it worked, or -1 on error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 0x01;

	mask = ~(mask << index);
	if (mask == 0x00)
		return (-1);

	*n &= mask;
	return (1);
}
