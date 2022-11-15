#include "lists.h"

/**
 * add_node - Adds a node to linked list
 * @head: Double pointer to the first node of the linked list
 * @str: String value of the new node
 *
 * Return: Address / Pointer of the new element.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	new->len = strlen(str);
	new->next = *head;
	*head = new;
	return (*head);
}
