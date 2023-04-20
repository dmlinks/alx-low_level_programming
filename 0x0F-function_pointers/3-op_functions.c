#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * op_add - A function that returns the sum of a and b
 * @a: an input integer
 * @b: an input integer
 * Return: the result sum of a and b.
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - A function that returns the difference of a and b
 * @a: an input integer
 * @b: an input integer
 * Return: the result difference of a and b.
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - A function that returns the multiplication of a and b
 * @a: an input integer
 * @b: an input integer
 * Return: the result multiplication of a and b.
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - A function that returns the division of a and b
 * @a: an input integer
 * @b: an input integer
 * Return: the result division of a and b.
 */
int op_div(int a, int b)
{
	if (a == 0 || b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a / b);
}

/**
 * op_mod - A function that returns the modules of a and b
 * @a: an input integer
 * @b: an input integer
 * Return: the result modulus of a and b.
 */
int op_mod(int a, int b)
{
	if (a == 0 || b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
