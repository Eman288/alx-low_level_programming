#include "hash_tables.h"

/**
 * hash_table_get - a function that retrieves a value associated with a key.
 * @ht: the hash table
 * @key: the key
 * Return: the valuse or null on fail
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;

	hash_node_t *temp;

	if (!ht || !key)
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);
	if (index >= ht->size)
		return (NULL);
	if (ht->array[index])
	{
		temp = ht->array[index];
		while (temp != NULL)
		{
			if (strcmp((const char *)temp->key, key) == 0)
				return (temp->value);
			temp = temp->next;
		}
	}
	return (NULL);
}
