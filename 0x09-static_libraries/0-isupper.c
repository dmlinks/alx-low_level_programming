#include "main.h"

/**
 * _isupper - checks if a char is uppercase
 * @c: an inout integer
 * Return: 1 if c is uppercseand some are mystery
 */
int _isupper(char *c)
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
