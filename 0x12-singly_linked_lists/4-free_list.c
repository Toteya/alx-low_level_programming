#include "lists.h"

/**
 * free_list - frees a linked list
 * @head: Pointer to the first node
 *
 * Return: Nothing.
 */
void free_list(list_t *head)
{
	list_t *nodePtr;

	if (head != NULL)
	{
		while (head->next != NULL)
		{
			nodePtr = head;
			head = head->next;
			free(nodePtr->str);
			free(nodePtr);
		}
		free(head->str);
		free(head);
	}
}
