#include "lists.h"

/**
 * add_node_end - Adds a node to the end of a linked list
 * @head: Double pointer to the first element of the list
 * @str: String value of the new list element
 *
 * Return: The address to the newly added element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *tail;

	if (str == NULL)
		return (NULL);
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	new->len = strlen(str);
	new->next = NULL;
	if (*head == NULL)
		*head = tail = new;
	else
	{
		tail = *head;
		while (tail->next != NULL)
		{
			tail = tail->next;
		}
		tail->next = new;
	}
	return (tail);
}
