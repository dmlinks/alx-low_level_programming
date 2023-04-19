#include <stdlib.h>

/**
 * array_iterator - A function thatexcoutes function given as a parameter
 * on each elemnt of an array
 * @array: A pointer to an array
 * @size: the size of the given array
 * @action: action (function) to iterate throught array
 * Return: Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
