#include "lists.h"
#include <stdio.h>

/**
 * list_len - A function that returns number of
 * element in a linked list
 * @h: The list to prints
 *
 * Return: the number of element in list list_t
 */

size_t list_len(const list_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
