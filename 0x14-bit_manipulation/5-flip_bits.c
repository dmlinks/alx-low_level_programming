#include "main.h"

/**
 * flip_bits - A function that returns the number of bits
 *	needed to flip to get the one number from another
 * @n: interger to flip
 * @m: interger to flip
 *
 * Return: Number of bits found
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int dif = n ^ m;
	unsigned int count = 0;

	while (dif)
	{
		count += dif & 1;
		dif >>= 1;
	}

	return (count);
}
