#include "lists.h"

/**
 * sum_listint - Returns the sum of all the nodes' data of a listint_t list.
 * @head: Pointer to the first node of the list.
 *
 * Return: int - sum of the list data.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		if (head->next == NULL)
			break;
		head = head->next;
	}
	return (sum);
}
