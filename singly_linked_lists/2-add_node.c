#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - Adds a new node at the beginning of a list_t list
 * @head: Pointer to the head pointer of the list
 * @str: String to duplicate into the new node
 *
 * Return: Address of the new node, or NULL if it failed
 *
 * Description: The function allocates a new node, duplicates the string
 * using strdup, calculates the length manually, and inserts the node
 * at the beginning of the linked list.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	unsigned int len = 0;

	if (!head || !str)
		return (NULL);

	/* Allocate memory for new node */
	new_node = malloc(sizeof(list_t));
	if (!new_node)
		return (NULL);

	/* Duplicate string */
	new_node->str = strdup(str);
	if (!new_node->str)
	{
		free(new_node);
		return (NULL);
	}

	/* Compute length manually */
	while (str[len])
		len++;
	new_node->len = len;

	/* Insert at the beginning */
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
