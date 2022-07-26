#include "main.h"
/**
 * create_array - creates an are of size szze with character c
 *
 * @size: unsigned int stating the size of size
 * @c: char to fill the size of the matrix
 *
 * Return: null if size is 0 and ptr to first memory character if not
*/
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ptr;

	ptr = (char *) malloc(sizeof(char) * size);
	if (ptr == NULL)
		return (NULL);
	for (i = 0 ; i < size; i++)
	{
		*(ptr + i) = c;
	}
	if (size == 0)
	{
		return (NULL);
	}
	else
		return (ptr);
}
