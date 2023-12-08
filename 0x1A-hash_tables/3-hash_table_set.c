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
	hash_node_t *new_element, *temp;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);

	new_element = malloc(sizeof(hash_node_t));
	if (new_element == NULL)
		return (0);

	ht_index = key_index((const unsigned char *)key, ht->size);

	temp = ht->array[ht_index];
	while (temp != NULL)
	{
		if (strncmp(temp->key, key, ht->size) == 0)
		{
			free(temp->value);
			temp->value = strdup(value);
			free(new_element);
			return (1);
		}
	       temp = temp->next;
	}
	new_element->key = strdup(key);
	new_element->value = strdup(value);
	if (new_element->value == NULL || new_element->key == NULL)
		return (0);


	new_element->next = ht->array[ht_index];
	ht->array[ht_index] = new_element;
	return (1);

}
