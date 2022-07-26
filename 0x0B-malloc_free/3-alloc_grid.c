#include "main.h"
/**
*
*
*/
int **alloc_grid(int width, int height)
{
int i;
char **j;

if (width <= 0)
    return (NULL);
else if (height <= 0)
    return (NULL);
i = sizeof(int *) * width + sizeof(int) * width * height;
j = malloc(len);
if (j == NULL)
    return (NULL);
return (j);
}