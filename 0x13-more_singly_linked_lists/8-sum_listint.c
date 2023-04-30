#include "lists.h"

/**
 * sum_listint - A function that add all the data in a linked list
 * @head: pointer to the head of the list
 *
 * Return: The sum of all the data in the list
 * 0 if list is empty
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *current_node = head;

	while (current_node != NULL)
	{
		sum += current_node->n;
		current_node = current_node->next;
	}

	return (sum);
}
