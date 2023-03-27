#include "main.h"
#include <stdio.h>

/**
 * print_array - A function that prints n elements of an array of integers
 * followed by a new line
 * @a: An input array
 * @n: An input array number
 * Return: Nothing
 */
void print_array(int *a, int n)
{
	int i = 0;

	for (; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
			printf(", ");
	}
	printf("\n");
}
