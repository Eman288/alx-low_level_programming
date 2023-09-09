#include "hash_tables.h"

/**
 * hash_table_delete - a function that deletes a hash table.
 * @ht: the hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *temp, *del;

	unsigned long int i;

	if (ht)
	{
		for (i = 0; i < ht->size; i++)
		{
			temp = ht->array[i];
			while (temp != NULL)
			{
				del = temp;
				free(del->key);
				free(del->value);
				free(del);
				temp = temp->next;
			}
		}
		free(ht->array);
	}
	free(ht);
}
