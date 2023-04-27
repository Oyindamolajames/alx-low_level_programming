#include "lists.h"

/**
 * add_node - Adds a new node at the beginning of a list_t list.
 * @head: A pointer to a pointer to the beginning of the list_t list.
 * @str: The string to be added to the list_t list.
 *
 * Return: If successful - a pointer to the new element. Otherwise - NULL.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = NULL;

	if (head == NULL || str == NULL)
		return (NULL);

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->len = _strlen(new_node->str);
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
