#include "main.h"

/**
 * _abs - returns the absolute value of an integer
 * @r: an input integer
 * Return: Absolute value of r
 */
int _abs(int r)
{
	if (r >= 0)
		return (r);
	else
		return (r * -1);
}
