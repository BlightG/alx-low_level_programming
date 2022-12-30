#include "hash_tables.h"
/**
 * hash_table_print - prints a hash table
 *
 * @ht: a hash table
*/
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *temp;
	int n = 0;

	if (ht)
	{
		if (ht->array)
		{
			printf("{");
			for (i = 0; i < ht->size; i++)
			{
				temp = ht->array[i];
				while (ht->array[i] != NULL)
				{
					if (n == 1)
						printf(", ");
					printf("'%s': '%s'", ht->array[i]->key, ht->array[i]->value);
					ht->array[i] = ht->array[i]->next;
					n = 1;
				}
				ht->array[i] = temp;

			}
			printf("}\n");
		}
	}
}
