#include "lists.h"

/**
 * free_listint - Frees a listint_t list.
 * @head: Pointer to the first node.
 *
 * Return: Nothing.
 */
void free_listint(listint_t *head)
{
	listint_t *old;

	if (head != NULL)
	{
		while (head->next != NULL)
		{
			old = head;
			head = head->next;
			free(old);
		}
		free(head);
	}
}
