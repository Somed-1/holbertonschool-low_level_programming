#include "hash_tables.h"

void linked_list_print(hash_node_t *head, int comma)
{
	while (head)
	{
		printf("'%s' : '%s'");
		if (comma && !(head->next))
		{
			printf(", ")
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
	int comma;

	printf("{");
	while (cur)
	{
		comma = (cur->next) ? 1 : 0;
		linked_list_print(cur, comma);
	}
	printf("}")
}
