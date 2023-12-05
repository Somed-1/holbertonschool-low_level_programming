#include "lists.h"

/**
 * add_dnodeint_end - add node at the end
 * @head: first node
 * @n: integer
 * Return: len of list
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));
	dlistint_t *last;
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}

	last = head;
	while (last->next)
	{
		last = last->next;
	}
	last->next = new;
	new->prev = last;
	return (new);
}
