#include "search_algos.h"
/**
 * linear_search - performs a linear seach on int array
 *                 to find index of value
 *
 * @array: unsorted int array to be searhced with linear search
 * @size: size of @array
 * @value: value to be searched for
 *
 * Return: index of @value or -1 if failed
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
