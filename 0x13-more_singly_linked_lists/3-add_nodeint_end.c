#include "lists.h"

/**
 * add_nodeint_end - Adds a new node to the end of a list
 * @head: Double pointer to the first node
 * @n: Value of new element / node.
 *
 * Return: Address of new element,
 * Otherwise, return NULL if failed.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *tail;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
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
