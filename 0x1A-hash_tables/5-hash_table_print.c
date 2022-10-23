#include "hash_tables.h"
/**
 * 
 * 
*/
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *temp;

	if (ht != NULL || ht->array != NULL)
	{
		printf("{");
		for (i = 0; ht && i < ht->size; i++)
		{
			temp = ht->array[i];
			while (temp)
			{
				printf("i = %ld '%s': '%s'", i, ht->array[i]->key, ht->array[i]->value);
				printf(", ");
				temp = temp->next;
			}
		}
		printf("}\n");
	}
}