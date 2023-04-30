#include "lists.h"

/**
 * delete_nodeint_at_index - A function that deletes the nodes at a 
 * particular idex from the list
 * @head: A pointer to the linked list
 * @index: The index of the node to delete
 * Return: 1 if it succeed, and -1 of it fails.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *prev;
	unsigned int i;

	if (*head == NULL)
		return (-1);

	temp = *head;

	if (index == 0)
	{
		*head = (*head)->next;
		free(current);
		return (1);
	}

	for (i = 0; i < index; i++)
	{
		prev = temp;
		temp = temp->next;

		if (temp == NULL)
			return (-1);
	}
	prev->next = temp->next;
	free(temp);

	return (1);
}
