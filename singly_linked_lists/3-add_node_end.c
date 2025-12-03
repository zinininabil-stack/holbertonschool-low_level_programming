#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: pointer to the head pointer
 * @str: string to duplicate into the new node
 *
 * Return: address of the new element, or NULL on failure
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *temp;
	unsigned int len = 0;

	if (!head || !str)
		return (NULL);

	/* allocate new node */
	new_node = malloc(sizeof(list_t));
	if (!new_node)
		return (NULL);

	/* duplicate string (allowed) */
	new_node->str = strdup(str);
	if (!new_node->str)
	{
		free(new_node);
		return (NULL);
	}

	/* manually compute length (no strlen allowed) */
	while (str[len])
		len++;

	new_node->len = len;
	new_node->next = NULL;

	/* if list is empty */
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	/* otherwise go to the end */
	temp = *head;
	while (temp->next)
		temp = temp->next;

	temp->next = new_node;

	return (new_node);
}
