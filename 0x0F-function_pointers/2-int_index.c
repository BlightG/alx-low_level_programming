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
				return (1);
				break;
			}
			else 
			{
				return (0);
				break;
			}
		}
	}
	else if (size <= 0)
		return (-1);
	else 
		return (-1);

}
