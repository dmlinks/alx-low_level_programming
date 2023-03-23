#include "main.h"

/**
 * print_triangle - prints a triangle
 * followed by a new line
 * @size: an input integer
 * Return: Always 0
 */
void print_triangle(int size)
{
	int a;
	int b;
	int n;

	n = size - 1;

	if (size > 0)
	{
		for (a = 0; a < size; a++)
		{
			for (b = 0; b < size; b++)
			{
				if (b < n)
					_putchar(' ');
				else
					_putchar('#');
			}
			n--;
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
