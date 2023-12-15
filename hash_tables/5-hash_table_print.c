#include "hash_tables.h"

/**
 * linked_list_print - prints linked list
 * @head: first node
 * @comma: flag for commas
 * Return: void
 */
void linked_list_print(hash_node_t *head, int comma)
{
	while (head)
	{
		printf("\'%s\' : \'%s\'", head->key, head->value);
		if (comma && !(head->next))
		{
			printf(", ");
		}
	}
}

/**
 * hash_table_print - prints hash table
 * @ht: hash table
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *cur;
	int comma;

	cur = ht->array[0];
	printf("{");
	while (cur)
	{
		comma = ((cur->next) != NULL) ? 1 : 0;
		linked_list_print(cur, comma);
	}
	printf("}");
}
