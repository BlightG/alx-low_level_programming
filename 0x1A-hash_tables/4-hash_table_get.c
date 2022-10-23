#include "hash_tables.h"
/**
 * 
 * 
 * 
 * 
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_table_t *temp_array;
	unsigned long int index;
	char * keydup;
	keydup = (char *) key;

	if (ht == NULL)
		return (NULL);
	
	index = key_index((unsigned char *) key, ht-> size);

	temp_array = (hash_table_t *) ht;
	if (temp_array->array[index] == NULL)
		return (NULL);
	else
	{
		if (temp_array->array[index]->key == keydup)
			return (temp_array->array[index]->value);
		else
			return (NULL);
	}
	return (NULL);

}
