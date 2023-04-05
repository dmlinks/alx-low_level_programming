#include "main.h"
int _squ(int num, int root);

/**
 * _sqrt_recursion - A function of a natural square root of a number
 * @n: input integer
 * Return: Square root of an natural integer
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_squ(1, n));
}


/**
 * _squ - find the square root
 * @num: number to check
 * @root: square root found
 * Return: square root of n
 */
int _squ(int num, int root)
{
	if (num > root)
		return (-1);
	else if (num * num == root)
		return (num);
	else
		return (_squ(num + 1, root));
}
