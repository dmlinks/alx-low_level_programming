#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - print all natural number from n to 98,
 * followed by a new line
 * @n: int to print from
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		for (; n <= 98; n++)
		{
			printf("%d", n);

			if (n == 98)
				continue;
			else
				printf(", ");
		}
		printf("\n");
	}
	else
	{
		for (; n >= 98; n--)
		{
			printf("%d", n);

			if (n == 98)
				continue;
			else
				printf(", ");
		}
	printf("\n");
	}
}
