#include "lists.h"
#include <stdlib.h>
#include <string.h>

int _strlen(const char *s);

/**
 * add_node_end - Adds a new node at the end of a list_t list.
 * @head: Pointer to a pointer to the first node of the list.
 * @str: String to be stored in the new node.
 *
 * Return: Address of the new node, or NULL if it failed.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *last_node;

	if (head == NULL)
		return (NULL);

	/* Allocate memory for the new node */
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	/* Duplicate the string */
	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	/* Compute the length of the string */
	new_node->len = _strlen(new_node->str);

	/* Set the next pointer of the new node to NULL */
	new_node->next = NULL;

	/* Find the last node in the list */
	last_node = *head;
	while (last_node != NULL && last_node->next != NULL)
		last_node = last_node->next;

	/* Add the new node to the end of the list */
	if (last_node == NULL)
		*head = new_node;
	else
		last_node->next = new_node;

	return (new_node);
}

/**
 * _strlen - Computes the length of a string.
 * @s: A pointer to the first character of the string.
 *
 * Return: The length of the string (not including the terminating null byte).
 */
int _strlen(const char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}

	return (len);
}

