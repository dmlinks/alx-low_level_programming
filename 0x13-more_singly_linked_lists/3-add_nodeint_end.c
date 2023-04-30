#include "lists.h"

/**
 * add_nodeint_end - A function that adds a new node at the end
 * of a linked list
 * @head: a pointer that points to the head of the list
 * @n: interger to add to the end of the list
 *
 * Return: Addres of the new elements or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *current_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
		*head = new_node;
	else
	{
		current_node = *head;
		while (current_node->next != NULL)
		{
			current_node = current_node->next;
		}
		current_node->next = new_node;
	}
	return (new_node);
}
