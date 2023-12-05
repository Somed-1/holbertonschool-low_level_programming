#include "lists.h"

/**
 * free_list - frees list
 * @head: first element
 * Return: void
 */
void free_list(list_t *head)
{
	while (head)
	{
		free(head);
		head = head->next;
	}
}
