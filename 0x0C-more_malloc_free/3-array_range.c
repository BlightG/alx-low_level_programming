#include "main.h"
/**
* print_range - prints array from min to max
*
* @ptr: int array pointer
* @min: lowest value of an array
* @max: highest value of an array
*
*/

void print_range(int *ptr, int min, int max)
{
	int i;

	for (i = 0; min <= max ; i++)
	{
		ptr[i] = min;
		min++;
	}
}
/**
* array_range - funtion to make an array from min to max
*
* @min: lowest value of an array
* @max: highest value of an array
*
* Return: a pointer to an array
*/
int *array_range(int min, int max)
{
	int j;
	int *ptr;


	if (min > max)
		return (NULL);

	j = max - min;
	ptr = malloc((j + 1) * sizeof(int));
	if (ptr == NULL)
		return (NULL);

	print_range(ptr, min, max);

	return (ptr);
}
