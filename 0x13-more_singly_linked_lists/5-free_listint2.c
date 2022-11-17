#include "lists.h"

/**
 * free_listint2 - Frees a listint_t list
 * @head: Double pointer to the first node of the list
 *
 * Return: Nothing.
 */
void free_listint2(listint_t **head)
{
	listint_t *old;

	if (*head != NULL && head != NULL)
	{
		do {
			old = *head;
			*head = (*head)->next;
			free(old);
		} while ((*head != NULL));
	}
}
