#include <stdlib.h>

/**
 * int_index - A function to searche for an integer
 * @array: A pointer to an array to search
 * @size: Size of the given array
 * @cmp: cmp(function) used to compare the element in array given
 * Return: The index of the first element for which the cmp function
 * doesn't return 0; if no interger matches or size <= 0'
 * returns -1.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);

	if (cmp == NULL || array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}

	if (i == size)
		return (-1);
	return (-1);
}
