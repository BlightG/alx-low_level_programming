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
		for (i = 0; i < ht->size; i++)
		{
			temp = ht->array[i];
			if (temp->key != 0)
			{
				while (temp)
				{
					printf("i = %ld '%s': '%s'", i, temp->key, temp->value);
					printf(", ");
					temp = temp->next;
				}
			}
		}
		printf("}\n");
	}
}