#include "hash_tables.h"
/**
 * hash_table_create - a function to create a hash table
 *
 * @size: size of a hastable to create
 *
 * Return: a pointer to the newly created hash table
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *newhash;
	hash_node_t **ht;
	unsigned long int i;

	newhash = malloc(sizeof(hash_table_t));
	if (newhash == NULL)
	{
		free(newhash);
		return (NULL);
	}
	newhash->size = size;
	ht = malloc(sizeof(hash_node_t *) * size);
	if (ht == NULL)
	{
		free(ht);
		return (NULL);
	}
	for (i = 0 ; i < size ; i++)
		ht[i] = NULL;

	newhash->array = ht;
	return (newhash);
}
