#include "lists.h"

/**
 * add_nodeint - A function that add new node at the beginning
 * of a list
 * @head: A pointer to points to the head of the list
 * @n: an integer data to add to the new node
 *
 * Return: address of the new element added, NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = head;
	*head = malloc(sizeof(listint_t));
	if (!*head)
		return (NULL);
	(*head)->n = n;
	(*head)->next = new_node;
	return (*head);
}
