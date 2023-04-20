#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - A function that prints numbers followed by a new line
 * @separator: an input string to be printed between numbers
 * @n: Number of given argument
 * @...: other parameters
 * Return: Nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	int num;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		num = va_arg(ap, int);
		printf("%d", num);
		if (separator == NULL)
			continue;
		if (i < (n - 1))
			printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}
