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
		temp = malloc(sizeof(hash_node_t));
		if (!temp)
			exit(EXIT_FAILURE);
	
		printf("{");
		for (i = 0; i < ht->size; i++)
		{
			temp = ht->array[i];
			printf("temp = %p, ht->array[%ld] = %p\n", (void *) temp, i, (void *) ht->array);
			while (temp)
			{
				printf("'%s': '%s'", ht->array[i]->key, ht->array[i]->value);
				printf(", ");
				temp = temp->next;
			}
		}
		printf("}\n");
	}
}