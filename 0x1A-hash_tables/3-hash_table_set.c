#include "hash_tables.h"
/**
 * hash_table_set - set a value on a hash table on a place equivalent
 *                   to the index generated by using the key
 *
 * @ht: pointer to a structure holding
 *      the hashtable array and size of hash table
 * @key: key of the value
 * @value: value to stored
 *
 * Return: 1 if succesfull or 0 in Failure
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *hash_value, *temp_array;

	if (ht == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	hash_value = malloc(sizeof(hash_node_t));
	if (hash_value == NULL)
		return (0);

	hash_value->key = strdup(key);
	hash_value->value = strdup(value);
	hash_value->next = NULL;
	temp_array = ht->array[index];

	if (ht->array[index] == NULL)
	{
		ht->array[index] = hash_value;
		return (1);
	}
	while (temp_array != NULL)
	{
		if (strcmp(temp_array->key, hash_value->key))
		{
			hash_value->next = temp_array;
			ht->array[index] = hash_value;
			return (1);
		}
		else
		{
			temp_array->value = hash_value->value;
			return (1);
		}
		temp_array = temp_array->next;
	}
	return (0);
}
