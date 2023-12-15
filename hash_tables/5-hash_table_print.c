#include "hash_tables.h"

/**
 * hash_table_print - prints hash table
 * @ht: hash table
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	long unsigned int i = 0;
	hash_node_t *cur;
	char *comma = "";

	printf("{");
	cur = ht->array[i];
	printf("%s'%s': '%s'", comma, head->key, head->value);
	comma = ", ";
	while (i++ < ht->size)
	{
		while (cur)
		{
			printf("%s'%s': '%s'", comma, head->key, head->value);
			cur = cur->next;
		}
		cur = ht->array[i];
	}
	printf("}\n");
}
