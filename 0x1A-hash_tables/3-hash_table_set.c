#include "hash_tables.h"
/**
 * create_element - a function to return a new element
 * @key: the key in the element
 * @value: hte value
 * Return: a new element
 */
hash_node_t *create_element(const char *key, const char *value)
{
	hash_node_t *ele;

	ele = malloc(sizeof(hash_node_t *));
	ele->key = (char *) malloc(strlen(key) + 1);
	ele->value = (char *) malloc(strlen(value) + 1);
	strcpy(ele->key, key);
	strcpy(ele->value, value);
	return (ele);
}
/**
 * hash_table_set -  a function to insert the new element in the hash table
 * @ht: the hash table header
 * @key: the key
 * @value: the value
 * Return: 1 on success 0 on failure
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *ele, *temp;

	unsigned long int index;

	if (key == NULL)
		return (0);
	ele = create_element(key, value);
	if (!ele)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	if (ht->array[index])
	{
		temp = ht->array[index];
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = ele;
		ele->next = NULL;
	}
	else
	{
		ht->array[index] = ele;
		ele->next = NULL;
	}
	return (1);
}
