#include "hash_tables.h"


/**
 * key_index - key index
 * @key: key
 * @size: size
 * Return: index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (unsigned long int)(hash_djb2(key) % size);
}
