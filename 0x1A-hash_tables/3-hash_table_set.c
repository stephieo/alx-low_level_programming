#include "hash_tables.h"
/**
 * hash_table_set - inserts an element to a hash table
 * @ht: hash table to update
 * @key: key for hash function(cannot be empty string)
 * @value: value associated with key
 *
 * Return: 1(success) , 0 (fail)
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int ht_index;
	hash_node_t *new_element;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);
	new_element = malloc(sizeof(hash_node_t));
	if (new_element == NULL)
	{
		return (0);
	}
	new_element->next = NULL;
	new_element->key = strdup(key);
	new_element->value = strdup(value);
	if (new_element->value == NULL || new_element->key == NULL)
		return (0);
	ht_index = key_index((const unsigned char *)key, ht->size);

	new_element->next = ht->array[ht_index];
	ht->array[ht_index] = new_element;
	return (1);

}
