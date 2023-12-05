#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given index
 * @h: pointer to the first node
 * @idx: index at which to insert the new node
 * @n: integer value for the new node
 * Return: the address of the new node or NULL on failure
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new;
	dlistint_t *current = *h;
	unsigned int cur_idx = 0;

	if (idx == 0)
	{
		new = add_dnodeint(h, n);
		return new;
	}

	while (current && cur_idx != idx - 1)
	{
		current = current->next;
		cur_idx++;
	}

	if (!current)
	{
		return NULL;
	}

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		return NULL; // Allocation failed
	}

	new->n = n;

	if (current->next)
	{
		new->next = current->next;
		new->prev = current;
		current->next->prev = new;
		current->next = new;
	}
	else
	{
		// Inserting at the end of the list
		new->next = NULL;
		new->prev = current;
		current->next = new;
	}

	return new;
}
