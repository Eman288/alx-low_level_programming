#include "hash_tables.h"

/**
 * hash_table_create - creates a new hash table
 * @size: the size of the array in the hash table
 * Return: a pointer to a new hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;

	unsigned long int i;

	table = malloc(sizeof(hash_table_t *));
	if (!table)
		return (NULL);
	table->size = size;
	table->array = (hash_node_t **) calloc(table->size, sizeof(hash_node_t *));
	if (!table->array)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		table->array[i] = NULL;
	}
	return (table);
}
