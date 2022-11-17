#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node into a list at the given index.
 * @head: Pointer to the first node of the list
 * @idx: The index at which to insert the new node.
 * @n: Data value of the new node
 *
 * Return: Address of the new node.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *curNode;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);
	curNode = *head;
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;

	for (i = 1; i < idx; i++)
	{
		if (curNode == NULL)
		{
			free(new);
			return (NULL);
		}
		curNode = curNode->next;
	}
	if(idx == 0)
	{
		new->next = *head;
		*head = new;
	}
	else
	{
		new->next = curNode->next;
		curNode->next = new;
	}
	return (new);
}
