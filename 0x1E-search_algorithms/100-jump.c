#include"search_algos.h"
/**
 *
 *
*/
int jump_search(int *array, size_t size, int value)
{
	size_t jump_size = round(sqrt(size)); 
	size_t index = 0;
	/* int result; */

	if (!array || size == 0)
		return (-1);

	while (index < size)
	{
		if (array[index] == value)
			return (index);
		else if (array[index] > value)
		{
			if ((index - jump_size) >= jump_size)
			{
				return(linear_search(&array[index - jump_size], jump_size, value));
			}
			else
				return (-1);
		}
		else if (array[index] < value)
		{
			if ((index + jump_size) < jump_size)	
				return(linear_search(&array[index], size, value));
			else
				return (linear_search(&array[index], jump_size, value));

		}
		index = index + jump_size;
	}	
	return (-1);
}
/**
 *
*/
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (!array)
		return (-1);
	for (i = 0; i < size ; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}
