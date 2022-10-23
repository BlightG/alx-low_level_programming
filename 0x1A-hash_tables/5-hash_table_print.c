#include "hash_tables.h"
/**
 * 
 * 
*/
void hash_table_print(const hash_table_t *ht)
{
	unsigned int i;
	hash_node_t *temp;
	int n;

	if (ht != NULL || ht->array != NULL)
	{
		printf("{");
		for (i = 0; i < ht->size; i++)
		{
			temp = ht->array[i];
			n = 0;
			if (temp->key != NULL)
			{
				while (temp)
				{
					if (n)
						printf(", ");
					printf("'%s': '%s'", temp->key, temp->value);
					temp = temp->next;
					n = 1;
				}
			}
		}
		printf("}\n");
	}
}