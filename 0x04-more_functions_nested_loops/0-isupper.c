#include "main.h"

/**
 * _isupper - check for uppercase
 * @c: char to check
 * Return: 1 if c is uppercase and 0 otherwise
 */

int _isupper(int c)
{
	char uppercase;
	int isupper;

	uppercase = 'A';
	isupper = 0;

	for (; uppercase <= 'Z'; uppercase++)
	{
		if (c == uppercase)
		{
			isupper = 1;
			break;
		}
	}
	return (isupper);
}
