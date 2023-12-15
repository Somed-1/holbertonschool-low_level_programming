#include "hash_tables.h"

/**
 * create_hash_node - creates a hash node
 * @key: key to add or update
 * @value: value associated with the key
 *
 * Return: pointer to the new hash node
 */
hash_node_t *create_hash_node(const char *key, const char *value)
{
	hash_node_t *hash_node;

	hash_node = malloc(sizeof(hash_node_t));
	if (hash_node == NULL)
		return (NULL);

	hash_node->key = strdup(key);

	if (hash_node->key == NULL)
	{
		free(hash_node);
		return (NULL);
	}

	hash_node->value = strdup(value);

	if (hash_node->value == NULL)
	{
		free(hash_node->key);
		free(hash_node);
		return (NULL);
	}

	hash_node->next = NULL;
	return (hash_node);
}

/**
 * hash_table_set - adds an element to the hash table
 * @ht: hash table to add or update the key/value to
 * @key: key to add or update
 * @value: value associated with the key
 *
 * Return: 1 if success, 0 if fail
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx;
	hash_node_t *hash_node, *temp;
	char *new_value;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);

	idx = key_index((const unsigned char *)key, ht->size);
	temp = ht->array[idx];

	while (temp != NULL)
	{
		if (strcmp(temp->key, key) == 0)
		{
			new_value = strdup(value);
			if (new_value == NULL)
				return (0);
			free(temp->value);
			temp->value = new_value;
			return (1);
		}
		temp = temp->next;
	}
	hash_node = create_hash_node(key, value);
	if (hash_node == NULL)
		return (0);
	hash_node->next = ht->array[idx];
	ht->array[idx] = hash_node;

	return (1);
}
