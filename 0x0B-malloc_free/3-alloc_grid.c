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
int** j = (int**)malloc(width * sizeof(int*));
for (i = 0; i < width; i++)
    arr[i] = (int*)malloc(height * sizeof(int));
if (j == NULL)
    return (NULL);
return (j);
}