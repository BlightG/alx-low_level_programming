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

	newhash = malloc(sizeof(hash_table_t) * size);
	if (newhash == NULL)
	{
		free(newhash);
		return(NULL);
	}
	return (newhash);
}
