#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - A function that creates an array of chars
 * initializes it with a specific char.
 * @size: The size of the array
 * @c: A character to initailzed the array
 * Return: A pointer to the array or NULL if it fails.
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array;

	array = malloc(size * sizeof(char));

	if (size == 0)
		return (NULL);

	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = c;

	return (array);
}
