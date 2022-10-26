#include "hash_tables.h"
/**
 * hash_table_get - get a value from a hash table
 *                  given the key for the value
 *
 * @ht: pointer to a hash table
 * @key: key to a possiblee  value in has table
 *
 * Return: value associated with the element,
 *         or NULL if key couldn’t be found
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_table_t *temp_array;
	unsigned long int index;
	char *keydup;

	keydup = (char *) key;
	temp_array = (hash_table_t *) ht;

	if (ht == NULL)
		return (NULL);

	index = key_index((unsigned char *) key, ht->size);

	if (temp_array->array[index] == NULL)
		return (NULL);

	if (strcmp(temp_array->array[index]->key, keydup) == 0)
		return (temp_array->array[index]->value);
	else 
		return (NULL);
}
