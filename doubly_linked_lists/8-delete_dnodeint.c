#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes node
 * @head: first node
 * @index: index of node
 * Return: Secces 1, Fail -1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *cur = *head;
	dlistint_t *previous, *next;
	unsigned int cur_index = 0;

	if (!cur)
		return (-1);

	if (index == 0)
	{
		*head = cur->next;
		if (*head)
			(*head)->prev = NULL;
		free(cur);
		return (1);
	}

	while (cur && cur_index != index)
	{
		cur_index++;
		cur = cur->next;
	}

	if (!cur)
	{
		return (-1);
	}

	previous = cur->prev;
	next = cur->next;
	previous->next = next;
	if (next)
		next->prev = previous;

	free(cur);
	return (1);
}
