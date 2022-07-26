#include "main.h"
/**
*
*
*/
int **alloc_grid(int width, int height)
{
int i;
int **j;

if (width <= 0)
    return (NULL);
else if (height <= 0)
    return (NULL);
i = sizeof(int *) * height + sizeof(int) * height * width;
j = malloc(i);
if (j == NULL)
    return (NULL);
return (j);
}