#include "lists.h"

/**
 * add_dnodeint - add node at the beggining
 * @head: first node
 * @n: integer
 * Return: len of list
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;

	new->prev = NULL;
	new->next = (*head == NULL) ? NULL : *head;
	if (*head != NULL)
	{
		(*head)->prev = new;
	}

	*head = new;
	return (new);
}
