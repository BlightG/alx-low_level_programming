#include "main.h"
/**
*
*
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
*
*
*/
int *array_range(int min, int max)
{
	int j;
	int *ptr;
	(unsigned int) min;
	(unsigned int) max;

	if (min > max)
		return (NULL);

	j = max - min;
	ptr = malloc((j + 1) * sizeof(int));
	if (ptr == NULL)
		return (NULL);

	print_range(ptr, min, max);

	return (ptr);
}
