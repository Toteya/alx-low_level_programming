#include "lists.h"

/**
 * list_len - Return the number of elements in a linked list
 * @h: Pointer to first node of the list
 *
 * Return: size_t - Number of elements in the list
 */
size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		n++;
		if (h->next == NULL)
			break;
		h = h->next;
	}
	return (n);
}
