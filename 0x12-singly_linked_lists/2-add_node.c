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
	char *str_temp;

	temp = malloc(sizeof(list_t));
	if (temp == NULL)
		return (NULL);

	str_temp = strdup(str);
	if (str_temp == NULL)
	{
		free(temp);
		return (NULL);
	}

	temp->str = str_temp;
	temp->len = strlen(str_temp);
	temp->next = *head;
	*head = temp;

	return (temp);
}
