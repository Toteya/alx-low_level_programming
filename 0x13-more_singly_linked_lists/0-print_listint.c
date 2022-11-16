#include "lists.h"

/**
 * print_listint - Prints all the elements of a listint_t list
 * @h: Pointer to the first node of the list
 *
 * Return: size_t number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		i++;
		printf("%d\n", h->n);
		if (h->next == NULL)
			break;
		h = h->next;
	}
	return (i);
}
