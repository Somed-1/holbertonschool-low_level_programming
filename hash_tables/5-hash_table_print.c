#include "hash_tables.h"

/**
 * linked_list_print - prints linked list
 * @head: first node
 * @comma: flag for commas
 * Return: void
 */
void linked_list_print(hash_node_t *head, int comma)
{
	while (head)
	{
		printf("\'%s\':%d \'%s\'", head->key, comma,  head->value);
		if (comma != 0)
			printf(", ");
		head = head->next;
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
	long unsigned int i;
	int comma = 1;

	i = 0;
	cur = ht->array[i];
	printf("{");
	while (i < (ht->size))
	{
		if (i == (ht->size) - 2)
			comma = 0;
		printf("%ld", ht->size);
		linked_list_print(cur, comma);
		i++;
		cur = ht->array[i];
	}
	printf("}");
}
