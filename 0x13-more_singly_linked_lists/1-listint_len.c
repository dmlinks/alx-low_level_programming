#include "lists.h"

/**
 * listint_len - A function that returns number of elemnts in a linked list
 * @h: pointer to the head of the list
 *
 * Return: Number of elemnts linked in a list
 */
size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		h = h->next;
		nodes++;
	}
	return (nodes);
}
