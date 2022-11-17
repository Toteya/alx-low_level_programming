#include "lists.h"

/**
 * pop_listint - Deletes head node and returns its data.
 * @head: Pointer to the first node
 *
 * Return: int - Value of the deleted node
 */
int pop_listint(listint_t **head)
{
	listint_t *del;
	int n = 0;

	if (head != NULL)
	{
		if (*head == NULL)
		{
			del = *head;
			n = (*head)->n;
			*head = (*head)->next;
			free(del);
		}
	}
	return (n);
}
