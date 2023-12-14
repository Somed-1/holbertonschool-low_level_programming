#inclue "hash_tables.h"

unsigned long int hash_djb2(const unsigned char *str);

/**
 * key_index - key index
 * @key: key
 * @size: size
 * Return: index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % sizse);
}
