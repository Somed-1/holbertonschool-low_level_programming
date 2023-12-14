#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: size of array
 * Return: pointers to new hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new;

	new = malloc(sizeof(hash_table_t));
	if (!new)
		return (NULL);
	new->size = size;
	return (new);
}
