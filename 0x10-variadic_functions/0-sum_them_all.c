#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * sum_them_all - A function that sums all of its parameters
 * @n: number of parameter
 * @...: other parameters
 * Return: Sum of all the parameter
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list arg;
	unsigned int i;
	int sum = 0;

	if (n == 0)
		return (0);

	va_start(arg, n);
	for (i = 0; i < n; i++)
		sum += va_arg(arg, int);

	va_end(arg);
	return (sum);
}
