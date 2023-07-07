#include "main.h"
#include <limits.h>

/**
 * print_binary - A function that prints the binary representation of a number
 * @n: A pointer to the interger to convert
 *
 * Return: Binary representation of n
 */
void print_binary(unsigned long int n)
{
	char c = '0';
	unsigned long int pre = 1ul << 63;

	while (!(pre & n) && pre != 0)
		pre = pre >> 1;

	if (pre == 0)
		write(1, &c, 1);

	while (pre)
	{
		if (pre & n)
			c = '1';
		else
			c = '0';
		write(1, &c, 1);
		pre = pre >> 1;
	}
}
