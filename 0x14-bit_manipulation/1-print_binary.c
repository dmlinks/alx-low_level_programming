#include "main.h"


/**
 * print_binary - A function that prints the binary representation of a number
 * @n: A pointer to the interger to convert
 *
 * Return: Binary representation of n
 */
void print_binary(unsigned long int n)
{
	int i;
	int count = 0;
	unsigned long int pre;

	for (i = 63; i >= 0; i--)
	{
		pre = n >> i;

		if (pre & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}
