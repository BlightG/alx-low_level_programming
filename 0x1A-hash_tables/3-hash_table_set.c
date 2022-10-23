#include "hash_tables.h"
/**
 * 
 * 
 * 
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *hash_value, *temp;
	hash_node_t **temp_array;
	const char *keydup, *valuedup;

	keydup = key;
	valuedup = value;
	index = key_index((const unsigned char *)keydup, ht->size);
	if (ht == NULL)
	{
		return (0);
	}
	hash_value = malloc(sizeof(hash_node_t));
	if (hash_value == NULL)
	{
		free(hash_value);
		return (0);
	}
	/*printf("key: %s, value: %s, index: %lu\n",  key, value, index);*/
	hash_value->key = (char *) keydup;
	hash_value->value = (char *) valuedup;

	temp_array = ht->array;
	/*for (i = 0 ; i < index ; i++)
			temp_array++;*/

	if(temp_array[index] == NULL)
	{
		/*printf("if\n");*/
		hash_value->next = NULL;
		temp_array[index] = hash_value;
		/*printf("ht->array: %p, temp_array: %p ", (void *) ht->array, (void *) temp_array);*/
		/*printf("*ht->array->value: %s\n",  (*temp_array)->value);*/
	}
	else
	{
		/*printf("else\n");*/
		temp = temp_array[index];
		if (temp->key == hash_value->key)
		{
			temp->value = hash_value->value;
		}
		else
		{
			hash_value->next = temp;
			temp_array[index] = hash_value;
		}
		/*printf("temp->value: %s  ", temp->next->value);*/
	}
	/*printf("ht->array: %p, temp->value: %p \n", (void *) ht->array, temp->value );*/
	/*printf("ht->array: %p, sizeof(ht->array): %d\n", (void *) *temp_array, (int) sizeof(*temp_array));*/
	return (1);
}

