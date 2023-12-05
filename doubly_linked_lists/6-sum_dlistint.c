#include "lists.h"

/**
 * sum_dlistint - sum of list
 * @head: first node
 * Return: the sum of the list
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
