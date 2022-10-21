#include "hash_tables.h"
/**
 * 
 * 
 * 
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
        unsigned long int index, i;
        hash_node_t *hash_value, *temp;
        hash_node_t **temp_array;

        index = key_index((const unsigned char *)key, ht->size);
        hash_value = malloc(sizeof(hash_node_t));
        if (hash_value == NULL)
        {
                free(hash_value);
                return (0);
        }

        hash_value->key = (char *) key;
        hash_value->value = (char *) value;

        temp_array = ht->array;
        for (i = 0 ; i < index ; i++)
                        temp_array++;

        if(*temp_array == NULL)
        {
                /*printf("if\n");*/
                hash_value->next = NULL;
                *temp_array = hash_value;
                /*printf("ht->array: %p, *ht->array->value: %s\n", (void *) *temp_array, (*temp_array)->value);*/
        }
        else
        {
                /*printf("else\n");*/
                temp = *temp_array;
                /*printf("temp->value: %s", temp->value);*/
                while(temp->next != NULL)
                        temp = temp->next;
                temp->next = hash_value;
        }
        /*printf("ht->array->value: %s\n", temp->value);
        printf("ht->array: %p, sizeof(ht->array): %d\n", (void *) *temp_array, (int) sizeof(temp_array));*/
        return (1);
}

