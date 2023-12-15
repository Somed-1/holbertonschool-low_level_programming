#include "hash_tables.c"

/**
 * hash_table_delete - deletes a hash table
 * @ht: hash table
 * Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *cur, *temp;
	unsigned long int i = 0;

	while (i++ < ht->size)
	{
		cur = ht->array
		while(cur)
		{
			temp = cur->next;
			free(cur->key);
			free(cur->value);
			free(cur);
			cur = temp;
		}
	}
}
