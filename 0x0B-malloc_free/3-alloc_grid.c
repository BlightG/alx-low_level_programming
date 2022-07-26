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
j = malloc(height * sizeof(int*));
for (i = 0; i < height; i++)
    j[i] = (int*)malloc(width * sizeof(int));
if (j == NULL)
    return (NULL);
return (j);
}