#include "lists.h"

/**
 * pop_listint - A funcion that deletes the head node of a list
 * @head: a pointer that points to the head of the linked list
 *
 * Return: the data in the head or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	int data;
	listint_t *temp;

	if (*head == NULL)
		return (0);

	temp = *head;
	data = temp->n;
	(*head) = (*head)->next;
	free(temp);

	return (data);
}
