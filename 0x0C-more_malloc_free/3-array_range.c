#include "main.h"
/**
*
*
*
*/
int *print_range(int *ptr, int min, int max)
{
int i;

for (i = min ; i <= max ; i++)
{
    ptr[i] = i;
}
    ptr[i] = '\0';
    return (ptr);
}
/**
*
*
*/
int *array_range(int min, int max)
{
int *ptr;

if (min < 0)
    return (NULL);
if (min > max)
    return (NULL);
ptr = malloc((max - min) + 333);
if (ptr == NULL)
    return (NULL);
print_range(ptr, min, max);
return (ptr);
}
