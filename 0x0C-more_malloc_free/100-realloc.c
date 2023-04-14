#include "main.h"
#include <stdlib.h>

/**
 * _realloc - A function that reallocates a memory block using malloc and free
 * @ptr: pointer to the memory previously allocated
 * @old_size: old size in bytes of memory llocated space
 * @new_size: new size in bytes of memory to be allocated
 * Return: void pointer to new memory location
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
		return (malloc(new_size));

	if (new_size <= old_size)
		return (ptr);

	new_ptr = malloc(new_size);

	if (new_ptr == NULL)
		return (NULL);

	memcpy(new_str, ptr, old_size);
	free(ptr);

	return (new_ptr);
}
