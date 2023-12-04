#include "lists.h"

/**
 * list_len - return the len of linked list
 * @first: the node of linked list
 * Return: the lenth of linked list;
 */
size_t list_len(const list_t *h)
{
	size_t len = 0;
	
	while (h)
	{
		len++;
	}
	return (len);
}
