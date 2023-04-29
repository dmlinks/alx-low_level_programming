#include "lists.h"

/**
 * print_listint - A function that prints all the elemnts of a list
 * @h: pointer to the beginning of the list
 * Return: Number of nodes in the list
 */
size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		nodes++;
	}
	return (nodes);
}
