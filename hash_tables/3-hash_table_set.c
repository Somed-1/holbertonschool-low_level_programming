#include "hash_tables.h"

/**
 * new_hash_node - creates new hash node
 * @key: key
 * @value: value
 * Return: pointer to new hash node
 */
hash_node_t *new_hash_node(const char *key, const char *value)
{
	hash_node_t *new;

	new = mallco(sizeof(hash_node_t));
	if (!new)
		return (NULL);
	new->key = key;
	new->value = value;
	new->next = NULL;
	return (new);
}


/**
 * hash_table_set - add an element to table
 * @ht: hash table
 * @key: key
 * @value: value
 * Return: 1 on success, 0 on fail
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx;
	hash_node_t *cur;

	if (!ht || !key || !value)
		return (0);
	idx = key_index(key, value);
	cur = ht->array[idx];
	while (!cur->next)
	{
		cur = cur->next;
	}
	cur->next = new_hash_node(key, value);
	if (!(cur->new))
		return (0);
	return (1);
}
