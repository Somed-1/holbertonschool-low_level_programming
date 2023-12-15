#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value by key
 * @ht: hash table
 * @key: key
 * Return: value by key
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idx;
	hash_node_t *cur;

	idx = key_index((const unsigned char *)key, ht->size);
	cur = ht->array[idx];
	while (!cur)
	{
		if (strcmp(cur->key, key) == 0)
		{
			return (cur->value);
		}
		cur = cur->next;
	}
	return (NULL);
}
