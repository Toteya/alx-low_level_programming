#include "lists.h"

/**
 * add_nodeint - Adds a new element to a listint_t list
 * @head: Double pointer to the first node
 * @n: Value of the new element
 *
 * Return: Pointer to the new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (*head);
}
