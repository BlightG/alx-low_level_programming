#include "main.h"
/**
* clear_bit - sets the bit at index to 0
*
* @n: pointer to bit coordinate
* @index: bit index
*
* Return: returns 1 if successful or -1 if failure
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 8 * sizeof(unsigned long int))
		return (-1);
	/* first set bit at index to one*/
	*n = *n | 1 << index;
	/* then use xor to clear the bit */
	*n = *n ^ 1 << index;
	return (1);
}
