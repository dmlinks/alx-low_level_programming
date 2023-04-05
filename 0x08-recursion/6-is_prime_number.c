#include "main.h"
int is_dividable(int num, int div);

/**
 * is_prime_number - A function that checks if a number is prime.
 * @n: an input integer
 * Return: 1 if n is prime or  0 in otherwise
 */
int is_prime_number(int n)
{
	int div = 2;

	if (n <= 1)
		return (0);

	if (n == 3 || n == 2)
		return (1);

	return (is_dividable(n, div));
}


/**
 * is_dividable - check if num is divisible
 * @num: the number to be checked
 * @div: the result of division
 * Return: 1 if num is divisible or 0 if numis not divisible
 */
int is_dividable(int num, int div)
{
	if (num % div == 0)
		return (0);
	if (div * div > num)
		return (1);
	return (is_dividable(num, div + 1));
}
