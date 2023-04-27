#ifndef _LIST_H
#define _LIST_H

/**
 * struct list_s - singly liked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Descriptions: singly linked list node structure
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

/* Prototype functions */
int _putchar(char c);
size_t print_list(const list_t *h);

#endif
