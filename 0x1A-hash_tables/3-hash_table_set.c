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

        index = key_index(key, 1024);
        

        if(ht[index].array == NULL)
        {
                ht[index].array = &hash_value;        
                hash_value->key = key;
                hash_value->value = value;
                hash_value->next = NULL;
        }
        return (1);
}
