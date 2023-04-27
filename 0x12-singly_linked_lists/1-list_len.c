#include "lists.h"
#include <stdio.h>

/**
 * list_len - A function that returns number of elements in a linked list
 * @h: Pointer to the first node
 * Return: number of elements linked to list
 */
size_t list_len(const list_t *h)
{
	unsigned int nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}

	return (nodes);
}
