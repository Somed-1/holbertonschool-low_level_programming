#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts new node to index
 * @h: first node
 * @idx: index
 * @n: integer
 * Return: the address of the new node or NULL
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new;
	dlistint_t *current = *h;
	unsigned int cur_idx = 0;

	if (idx == 0)
	{
		new = add_dnodeint(h, n);
		return (new);
	}

	while (current && cur_idx != idx - 1)
	{
		current = current->next;
		cur_idx++;
	}

	if (!current)
	{
		return (NULL);
	}

	if (current->next)
	{
		new = malloc(sizeof(dlistint_t));
		new->n = n;
		if (new == NULL)
			return (NULL);
		new->next = current->next;
		new->prev = current;
		current->next->prev = new;
		current->next = new;
	}
	new = add_dnodeint_end(h, n);

	return (new);
}
