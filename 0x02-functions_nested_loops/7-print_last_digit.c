#include "main.h"

/**
 * print_last_digit - print the last digit of a number
 * @n: the int to extract last digit
 * Return: value of last digit
 */
int print_last_digit(int n)
{
	int d;

	if (n < 0)
		n = n * -1;
	d = n % 10;
	if (d < 0)
		d = -d;

	_putchar(d + '0');
	return (d);
}
