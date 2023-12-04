#include "lists.h"

/**
 * print_list - functoin prints linked list
 * @h: first node of linked list
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t len = 0;

	while (h)
	{
		if (h->str)
		{
			printf("[%ld] %s\n", strlen(h->str), h->str);
		}
		else
		{
			printf("[0] (nil)\n");
		}
		h = h->next;
		len++;
	}
	return (len);
}
