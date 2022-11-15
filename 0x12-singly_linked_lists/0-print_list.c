#include "lists.h"

/**
 * print_list - prints all the elements of a list, type list_t
 * @h: Pointer to the first element of the list
 *
 * Return: size_t size (number of elements) of the list
 */
size_t print_list(const list_t *h)
{
	size_t n = 0;
	while (h != NULL)
	{
		n++;
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		if (h->next == NULL)
			break;
		h = h->next;
	}
	return (n);
}
