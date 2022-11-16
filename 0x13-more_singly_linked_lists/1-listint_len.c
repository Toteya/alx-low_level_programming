#include "lists.h"

/**
 * listint_len - Returns the number of nodes of a listint_t list.
 * @h: Pointer to the first node of the list
 *
 * Return: size_t - length of the list.
 */
size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		i++;
		if (h->next == NULL)
			break;
		h = h->next;
	}
	return (i);
}
