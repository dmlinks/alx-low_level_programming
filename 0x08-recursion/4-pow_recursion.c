#include "main.h"

/**
 * _pow_recursion - A function that returns the value
 * of x raised to the power of y
 * @x: input integer to find the power
 * @y: expontent
 * Return: value of x raised to the power of y
 */
int _pow_recursion(int x, int y)
{
	if (y == 1)
		return (x);
	else if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
