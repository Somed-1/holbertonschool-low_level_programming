#include "lists.h"

/**
 * list_len - return the len of linked list
 * @h: the first node of linked list
 * Return: the lenth of linked list;
 */
size_t list_len(const list_t *h)
{
	size_t len = 0;

	while (h)
	{
		len++;
		h = h->next;
	}
	return (len);
}
