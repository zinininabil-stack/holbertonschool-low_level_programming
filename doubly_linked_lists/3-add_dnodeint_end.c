#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint - Adds a new node at the end of a dlistint_t list
 * @head: Pointer to the head pointer of the list
 * @n: Integer to store in the new node
 *
 * Return: Address of the new node, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *new_node;

	if (!head)
		return (NULL);

	/* Allocate memory for new node */
	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);

	/* Set the node data */
	new_node->n = n;
	new_node->next = NULL;        /* New node will be the last node */


	/* If list is not empty, set previous head's prev to new node */
	if (*head)
		(*head)->next = new_node;

	/* Update head pointer */
	*head = new_node;

	return (new_node);
}

