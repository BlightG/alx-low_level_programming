#include "main.h"
/*
*
*
*
*/
void free_grid(int **grid, int height)
{
int i;

for (i = 0 ; i <= 10 ; i++)
    free (grid);
}