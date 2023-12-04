#include "lists.h"
#include <stdio.h>
#include <string.h>

/**
 * print_list - functoin prints linked list
 * @h: first node of linked list
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t len = 0;
	while (*(h->next))
	{
		(*(h->str)) ? printf("[%d] %s\n", strlen(h->str), h->str) : printf("[0] (nil)");
		*h = h->next;
		i++;
	}
	return (len);
}
