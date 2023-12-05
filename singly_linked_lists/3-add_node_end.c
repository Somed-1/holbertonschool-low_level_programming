#include "lists.h"

/**
 * add_node_end - adds a node to the end of list
 * @head: pointer to the pointer of first the node
 * @str: string
 * Return: the address of the new element or null
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	new->len = strlen(str);
	
	if (*head == NULL)
	{
		new->next = NULL;
		*head = new;
		return (new);
	}

	list_t *last = *head;
	while (last->next)
		last++;
	last->next = new;
	return (new);
}
