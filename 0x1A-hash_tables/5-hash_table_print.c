#include "hash_tables.h"
/**
 * hash_table_print - a function that prints a hash table.
 * @ht: the hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;

	hash_node_t *temp;

	int flag = 0;

	printf("{");
	if (ht)
	{
		for (i = 0; i < ht->size; i++)
		{
			temp = ht->array[i];
			if (temp != NULL && flag == 1)
				printf(", ");
			while (temp != NULL)
			{
				printf("\'%s\': \'%s\'", temp->key, temp->value);
				if (temp->next != NULL)
					printf(", ");
				temp = temp->next;
			}
			if (ht->array[i])
				flag = 1;
		}
	}
	printf("}\n");
}
