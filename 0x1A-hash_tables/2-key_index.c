#include "hash_tables.h"
/**
 * key_index - generates the  index in a hash table for a key
 * @key: key
 * @size: size of array
 *
 * Return: index where key.vakue pair should be stored
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_value = hash_djb2(key);
	unsigned long int hash_index = hash_value % size;

	return (hash_index);
}

