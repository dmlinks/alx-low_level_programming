#include "main.h"

/**
 * swap_int - swap the value of two integers
 * @a: integer to swap with b
 * @b: integer to swap with a
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
