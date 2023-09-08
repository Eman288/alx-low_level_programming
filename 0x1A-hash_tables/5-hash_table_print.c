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
			while (temp != NULL)
			{
				printf("\'%s\': \'%s\'", temp->key, temp->value);
				flag = 1;
				if (temp->next != NULL)
					printf(", ");
				temp = temp->next;
			}
			if (flag != 0 && i != (ht->size - 1) && ht->array[i + 1] != NULL)
				printf(", ");
		}
	}
	printf("}\n");
}
