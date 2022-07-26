#include "main.h"
/**
*
*
*/
int **alloc_grid(int width, int height)
{
int i, k;
int **j;

if (width <= 0)
    return (NULL);
else if (height <= 0)
    return (NULL);
j = malloc(height * sizeof(int*));
for (i = 0; i < height; i++)
    {
        j[i] = (int*)malloc(width * sizeof(int));
        if (j[i] == NULL)
	{
		while (i >= 0)
		{
			free((j[i]));
			i--;
		}
		free(j);
		return (NULL);
	}
	for (j = 0; k < width; j++)
		grid[i][k] = 0;   
    }
return (j);
}