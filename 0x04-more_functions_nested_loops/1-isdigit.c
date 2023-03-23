#include "main.h"

/**
 * _isdigit - check for a digit (0 through 9)
 * @c: int to check
 * Return: 1 if c is a digit nad 0 otherwise
 */
int _isdigit(int c)
{
	int digit = 0;
	int isdigit = 0;

	for (; digit < 10; digit++)
	{
		if (c == digit)
		{
			isdigit = 1;
			break;
		}
	}
	return (isdigit);
}
