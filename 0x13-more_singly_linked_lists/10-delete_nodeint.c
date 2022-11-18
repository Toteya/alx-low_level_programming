#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes a listint_t node at the given index
 * @head: Double pointer to the first node of the list
 * @index: Index of the node to be deleted
 *
 * Return: If successful, 1.
 * Otherwise, if failed return -1.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *prev, *cur;

	if (head == NULL || *head == NULL)
		return (-1);
	prev = *head;
	cur = prev->next;
	for (i = 1; i < index; i++)
	{
		if (cur == NULL)
			return (-1);
		prev = prev->next;
		cur = prev->next;
	}
	if (!index)
	{
		cur = *head;
		*head = (*head)->next;
	}
	else
		prev->next = cur->next;
	free(cur);
	return (1);
}

