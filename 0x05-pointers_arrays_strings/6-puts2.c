#include "main.h"

/**
 * puts2 - A function that prints every other string,
 * starting with the first character,
 * followed by a new line.
 * @str: An input string
 * Return: Nothing
 */
void puts2(char *str)
{
	int len;
	int i;

	len = 0;
	i = 0;

	while (str[len] != '\0')
		len++;

	len -= 1;

	for (; i <= len; i += 2)
		_putchar(str[i]);

	_putchar('\n');
}
