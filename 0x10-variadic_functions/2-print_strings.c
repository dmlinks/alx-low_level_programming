#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - A function that prints strings followed bya new line
 * @separator: An input string to be printed between strings
 * @n: number of parmeters
 * @...: other parameters
 * Return: Nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	char *str;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(ap, char*);
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (separator != NULL || i != (n - 1))
			printf("%s", separator);
		else
			continue;
	}
	printf("\n");
	va_end(ap);
}
