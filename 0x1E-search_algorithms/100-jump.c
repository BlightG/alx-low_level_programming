#include"search_algos.h"
int linear_srch(int *array, size_t size, int value, size_t offset);
/**
 * jump_search - that searches for a value in a sorted array of integers
 *		 using the Jump search algorithm
 *
 * @array: a pointer to the first element of the array to search in
 * @size: number of elements in @array
 * @value: is the value to search for
 *
 * Return: the first index where value is located
 *          If value is not present in array or if array is NULL,
 *	     your function must return -1
*/
int jump_search(int *array, size_t size, int value)
{
	size_t jump_size = round(sqrt(size));
	size_t index = 0;
	int result;

	if (!array || size == 0)
		return (-1);

	while (index < size)
	{
		if (array[index] >= value)
		{
			if (index <= jump_size)
			{
				printf("Value found between indexes [%d] and [%ld]\n",
					0, index);
				return (linear_srch(&array[0],
					jump_size + 1, value, 0));
			}
			else
			{
				printf("Value found between indexes [%ld] and [%ld]\n",
					index - jump_size, index);
				result = linear_srch(&array[index - jump_size],
					jump_size + 1, value, index - jump_size);
				if (result == -1)
					return (-1);
				return (result + (index - jump_size));
			}
		}
		else if (array[index] < value)
		{
			if ((index + jump_size) < size)
			{
				printf("Value checked array[%ld] = [%d]\n", index, array[index]);
				index = index + jump_size;
			}
			else
			{
				printf("Value found between indexes [%ld] and [%ld]\n",
					index, index + jump_size);
				return (linear_srch(&array[index], size - index, value, index));
			}
		}
	}
	return (-1);
}
/**
 * linear_srch - performs a linear seach on int array
 *                 to find index of value
 *
 * @array: unsorted int array to be searhced with linear search
 * @size: size of @array
 * @value: value to be searched for
 * @offset: used to offeset index for print case
 *
 * Return: index of @value or -1 if failed
*/
int linear_srch(int *array, size_t size, int value, size_t offset)
{
	size_t i;

	if (!array)
		return (-1);
	for (i = 0; i < size ; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i + offset, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}
