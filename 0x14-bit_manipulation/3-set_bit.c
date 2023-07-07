#include "main.h"

/**
 * set_bit - A function that sets the value of a bit
 *		to 1 in a given index
 * @n: a pointer to th value to chnage
 * @index: where to change to 1
 *
 * Return: 1 if it worked
 *	or -1 if an erorr occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int a = 1;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	a <<= index;

	*n |= a;
	return (1);
}
