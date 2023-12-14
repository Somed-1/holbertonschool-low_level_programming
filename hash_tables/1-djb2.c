#include "hash_tables.h"

/**
 * djb2 - hash function
 * @str: string to hash
 * Return: result of hash funciton
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	hash = 5381;

	while (*str++)
	{
		hash_value = ((hash << 5) + hash + *str);
	}
	return hash;
}
