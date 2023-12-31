#include "lists.h"

/**
 * free_dlistint - frees the whole list
 * @head: first node
 * Return: len of list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
