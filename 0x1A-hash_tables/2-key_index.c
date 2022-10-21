#include "hash_tables.h"
/**
 * key_index - a function to return the key for string @key
 *             in an array of size @size
 *
 * @key: a string charachter that is going to be hash
 * @size: size of the hash sructure
 *
 * Return: an index value where @key will be stored
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
