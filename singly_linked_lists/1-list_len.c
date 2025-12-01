#include "lists.h"
#include <stdio.h>

/**
 * print_list - Prints all the elements of a list_t list.
 * @h: Pointer to the head of the list_t list.
 *
 * Description: This function loops through each node of a singly
 * linked list and prints the string stored in the node. If the
 * string is NULL, it prints "[0] (nil)". It returns the total
 * number of nodes in the list.
 *
 * Return: The number of nodes in the list.
 */
size_t list_len(const list_t *h);
{
	size_t count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);

		h = h->next;
		count++;
	}

	return (count);
}
