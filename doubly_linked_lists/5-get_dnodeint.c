#include "lists.h"

/**
 * get_dnodeint_at_index - takes index
 * @head: first node
 * @index: index of node
 * Return: the node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int cur_index = 0;

	while (cur_index != index)
	{
		if (!head)
		{
			return (NULL);
		}
		head = head->next;
		cur_index++;
	}
	return (head);
}
