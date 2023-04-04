#include "main.h"

/**
 * set_string - set the value of a pointer to a char.
 * @s: double pointer to a string
 * @to: pointer to set string s to
 * Return: nothing
 */
void set_string(char **s, char *to)
{
	*s = to;
}
