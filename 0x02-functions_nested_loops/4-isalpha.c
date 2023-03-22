#include "main.h"

/**
 * _isalpha - check for alphabetic character
 * @c: character to check
 * Return: 1 if charcter is a letter, lowercase or uppercase
 * return 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
