#include "hash_tables.h"
/**
 * 
 * 
 * 
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
        unsigned long int index;
        hash_node_t *hash_value;

        index = key_index((const unsigned char *)key, ht->size);
        hash_value = malloc(sizeof(hash_node_t));
        if (hash_value == NULL)
        {
                free(hash_value);
                return (0);
        }

        if(ht->array[index] == NULL)
        {
                hash_value->key = (char *) key;
                hash_value->value = (char *) value;
                hash_value->next = NULL;
                ht->array[index] = hash_value;        
        }
        printf("index: %lu, \n", index);
        return (1);

}
