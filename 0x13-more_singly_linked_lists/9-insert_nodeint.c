#include "lists.h"

/**
 * insert_nodeint_at_index - A function that insert a new node
 * at a given position
 * @head: A pointer that points to the head of the pointer
 * @idx: index of the new position
 * @n: data to input at index
 *
 * Return: Address of the new node at the new index
 * Null if it fail.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *temp;
	unsigned int i;

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	temp = *head;

	for (i = 0; temp && i < idx - 1; i++)
		temp = temp->next;

	if (!temp)
	{
		free(new_node);
		return (NULL);
	}
	new_node->next = temp->next;
	temp->next = new_node;

	return (new_node);
}
