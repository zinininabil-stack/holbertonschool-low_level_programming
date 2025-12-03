#include "lists.h"
#include <stdlib.h>

/**
 * free_list - Frees a dlistint_t list
 * @head: Pointer to the first node of the list
 *
 * Description: Traverses the doubly linked list and frees each node's string
 * and the node itself.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	if (!head)
		return;

	while (head)
	{
		temp = head->next;
		free(head);

		head = temp;
	}
}
