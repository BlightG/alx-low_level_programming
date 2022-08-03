#include "function_pointers.h"
/**
*
*
*
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && size && cmp)
	{
		for(i = 0; array[i] != '\0' ; i++)
		{
			if (cmp(array[i]))
			{
				return (i);
			}
			else 
			{
				return (0);
			}
		}
	}
	else if (size <= 0)
		return (-1);
	return (-1);

}