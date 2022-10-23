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
	hash_node_t *hash_value, *temp;
	hash_node_t *temp_array;
	const char *keydup, *valuedup;

	keydup = key;
	valuedup = value;
	if (ht == NULL)
		return (0);
	index = key_index((const unsigned char *)keydup, ht->size);
	hash_value = malloc(sizeof(hash_node_t));
	if (hash_value == NULL)
		return (0);

	hash_value->key = (char *) keydup;
	hash_value->value = (char *) valuedup;
	temp_array = malloc(sizeof(hash_node_t));
	if (!temp_array)
		return (0);
	temp_array = ht->array[index];

	if (!temp_array)
	{
		hash_value->next = NULL;
		temp_array = hash_value;
	}
	else
	{
		temp = temp_array;
		if (temp->key == hash_value->key)
			temp->value = hash_value->value;
		else
		{
			hash_value->next = temp;
			temp_array = hash_value;
		}
	}
	return (1);
}
