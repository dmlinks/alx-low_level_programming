#include "lists.h"
#include <string.h>

/**
 * add_node - A function that adds newnode at the beginning of a list
 * @head: Pointer to a list of pointer that
 * points to the head of the struct
 * @str: pointer to the string to add as node
 * Return: pointer to new head of the list, null on failure
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;
	int length = 0;

	temp = malloc(sizeof(list_t));
	if (temp == NULL)
		return (NULL);

	while (str[length])
		length++;

	temp->len = length;
	temp->str - strdup(str);
	temp->next = *head;
	*head = temp;
	return (temp);
}
