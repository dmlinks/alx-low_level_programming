#include "main.h"

/**
 * puts_half - a function that prints half of a string
 * followed by a new line
 * if odd len , n = (length_of_the_string - 1) / 2
 * @str: An input string
 * Return: Nothing
 */
void puts_half(char *str)
{
	int len;
	int a;
	int b;

	len = 0;

	while (str[len] != '\0')
		len++;

	if (len % 2 == 0)
		b = len / 2;
	else
		b = (len + 1) / 2;

	for (a = b; a < len; a++)
		_putchar(str[a]);

	_putchar('\n');
}
