#include "function_pointers.h"
/**
* int_index -  a function that searches for an integer
*
* @array: input array tobe searched
* @size: size of array
* @cmp: pointer to searching function
*
* Return: index of integer or -1 if failure
*
*
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && size && cmp)
	{
		for (i = 0; i < size ; i++)
		{
			if (cmp(array[i]))
				return (i);
		}
	}
	else if (size <= 0)
		return (-1);
	return (-1);

}
