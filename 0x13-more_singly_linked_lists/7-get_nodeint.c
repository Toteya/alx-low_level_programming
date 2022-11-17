#include "lists.h"

/**
 * get_nodeint_at_index - Return the node at the given index n.
 * @head: Pointer to the first node.
 * @index: Index of node to be returned.
 *
 * Return: Address of node at the given index.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head != NULL && i < index)
	{
		i++;
		head = head->next;
	}
	if (head == NULL)
		return (NULL);
	return (head);
}
