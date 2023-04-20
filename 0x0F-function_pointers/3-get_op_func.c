#include <stdlib.h>
#include "3-calc.h"

/**
 * get_op_func - A function that selects the correct function
 * to perform given by the user
 * @s: An input pointer operator passed as argument
 * Return: A pointer to the function that corresponds to the
 * operator passed as argument (s).
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (ops[i].op != NULL)
	{
		if (*(ops[i].op) == *s)
			return (ops[i].f);
		i++;
	}

	return (NULL);
}
