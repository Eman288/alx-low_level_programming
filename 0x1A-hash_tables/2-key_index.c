#include "hash_tables.h"
/**
 * key_index - a function to get the index of the position in the hash table
 * @key: the key which we will use
 * @size: the size of the array in the hash table
 * Return: the index of the hash table array
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
