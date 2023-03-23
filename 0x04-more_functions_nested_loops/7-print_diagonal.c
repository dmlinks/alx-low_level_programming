#include "main.h"

/**
 * print_diagonal - a function that draws a diagonal line in terminal
 * follwed by a new line
 * @n: an input interger
 * Return: Always 0
 */
void print_diagonal(int n)
{
	int a = 0, b;

	if (n > 0)
	{
		for (; a < n; a++)
		{
			for (b = 0; b < a; b++)
				_putchar(' ');
		_putchar('\\');
		_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
