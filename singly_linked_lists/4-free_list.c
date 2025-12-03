#include "lists.h"
#include <stdlib.h>

/**
 * free_list - Frees a list_t list
 * @head: Pointer to the first node of the list
 *
 * Description: Traverses the linked list and frees each node's string
 * and the node itself.
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head->next;  /* Save the next node */
		free(head->str);    /* Free the duplicated string */
		free(head);         /* Free the current node */
		head = temp;        /* Move to the next node */
	}
}
