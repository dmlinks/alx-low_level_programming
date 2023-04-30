#include "lists.h"

/**
 * get_nodeint_at_index - A function that returns the nth node
 * of a linked list
 * @head: pointer to the head of the list
 * @index: index of node to return
 *
 * Return: Node at the index or NULL if node doesnt exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *temp = head;

	while (*temp != NULL)
	{
		if (count == index)
		{
			return (temp);
		}
		count++;
		temp = temp->next;
	}

	return (NULL);
}
