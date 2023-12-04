#include "lists.h"

/**
 * add_node - adds a node to at the beginning of the linked list
 * @head: the last node of the linked list
 * @str: string
 * Return: the address of the new element or NULL
 */
list_t  *add_node(list_t **head, const char *str)
{
	list_t *new, *last;

	if (str == NULL)
		return (NULL);

	new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);

	new->str = strdup(str);

	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}

	new->len = strlen(new->str);
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	last = *head;
	while (last->next)
	{
		last = last->next;
	}
	last->next = new;
	return (new);
}
