#include "main.h"
/**
*
*
*
*/
int *print_range(int *ptr, int min, int max)
{
int i;

for (i = 0; min <= max ; i++)
{
    ptr[i] = min;
    min++;
}
	return (ptr);
}
/**
*
*
*/
int *array_range(int min, int max)
{
int j;
int *ptr;

if (min >= max || min < 0)
    return (NULL);
j = max - min;
ptr = malloc((j + 1) * sizeof (int));
if (ptr == NULL)
    return (NULL);

print_range(ptr, min, max);

return (ptr);
}
