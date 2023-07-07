#include "main.h"


/**
 * print_binary - A function that prints the binary representation of a number
 * @n: A pointer to the interger to convert
 *
 * Return: Binary representation of n
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		_putchar('0');
		return;
	}

	else if (n == 1)
	{
		_putchar('1');
		return;
	}

	print_binary(n >> 1);
	_putchar((n & 1) + '0');

}
