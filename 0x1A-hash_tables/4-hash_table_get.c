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
	hash_node_t *temp_array;
	unsigned long int index;
	char *keydup;

	keydup = (char *) key;

	if (ht == NULL)
		return (NULL);

	index = key_index((unsigned char *) key, ht->size);

	if (ht->array[index] == NULL)
		return (NULL);

	temp_array = ht->array[index];
	
	while (temp_array)
	{
		/*printf("temp_array->key = %s, temp_array->value = %s\n", temp_array->key, temp_array->value);*/
		if (strcmp(temp_array->key, keydup) == 0)
			return (temp_array->value);
		temp_array = temp_array->next;
		printf("ht->array[index]->key = %s, temp_array = %p\n", ht->array[index]->key, (void *) temp_array->next);

	}
	return (NULL);
}
