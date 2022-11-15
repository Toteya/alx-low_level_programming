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
	list_t *hp = h;
	while (h != NULL)
	{
		n++;
		if (hp->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", hp->len, hp->str);
		if (hp->next == NULL)
			break;
		hp = h->next;
	}
	return (n);
}
