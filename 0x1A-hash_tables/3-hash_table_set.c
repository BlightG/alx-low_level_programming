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

        index = key_index((const unsigned char *)key, ht->size);
        hash_value = malloc(sizeof(hash_node_t));
        if (hash_value == NULL)
        {
                free(hash_value);
                return (0);
        }

        hash_value->key = (char *) key;
        hash_value->value = (char *) value;

        /*for (i = 0 ; i < index ; i++)
                        ht->array++;*/

        if(ht->array[index] == NULL)
        {
                /*printf("if\n");*/
                hash_value->next = NULL;
                ht->array[index] = hash_value;
                printf("ht->array: %p, *ht->array->value: %s\n", (void *) ht->array[index], ht->array[index]->value);
        }
        else
        {       /*printf("else\n");*/
                temp = ht->array[index];
                /*printf("temp->value: %s", temp->value);*/
                while(temp->next != NULL)
                        temp = temp->next;
                temp->next = hash_value;
        }
        /*printf("ht->array->value: %s\n", temp->value);*/
        /*for (; i > 0 ; i--)
                        ht->array--;*/
        printf("ht->array: %p, sizeof(ht->array): %d\n", (void *) ht->array[index], (int) sizeof(ht->array));

        return (1);
}

