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
	int i;
	int comma;

	i = 0;
	cur = ht->array[i];
	printf("{");
	while (i < (ht->size))
	{
		comma = ((i == (ht->size - 1)) != NULL) ? 1 : 0;
		linked_list_print(cur, comma);
		cur = ht->array[++i];
	}
	printf("}");
}
