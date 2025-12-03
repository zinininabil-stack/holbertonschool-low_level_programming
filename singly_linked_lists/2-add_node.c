#include "lists.h"
#include <stdlib.h>

/* Custom string length function */
unsigned int my_strlen(const char *s)
{
	unsigned int len = 0;

	while (s[len] != '\0')
		len++;

	return (len);
}

/* Custom strdup() implementation */
char *my_strdup(const char *s)
{
	unsigned int i, len = my_strlen(s);
	char *copy = malloc(len + 1);

	if (!copy)
		return (NULL);

	for (i = 0; i < len; i++)
		copy[i] = s[i];

	copy[len] = '\0';
	return (copy);
}

/**
 * add_node - Adds a new node at the beginning of a linked list
 * @head: Pointer to the pointer to the head of the list
 * @str: String to store in the new node
 *
 * Return: Address of the new node, or NULL on failure
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	if (!head || !str)
		return (NULL);

	new_node = malloc(sizeof(list_t));
	if (!new_node)
		return (NULL);

	new_node->str = my_strdup(str);
	if (!new_node->str)
	{
		free(new_node);
		return (NULL);
	}

	new_node->len = my_strlen(str);
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
