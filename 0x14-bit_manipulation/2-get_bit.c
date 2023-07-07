#include "main.h"

/**
 * get_bit - A function that returns the value of a bit
 *		at a given index
 * @n: interger containing the value to chck
 * @index: value to check for
 *
 * Return: value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mak = 1;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	mak <<= index;


	if (n & mak)
		return (1);
	else
		return (0);
}
