#include "main.h"
/**
*
*
*
*
*/
void print_triangle(int size)
{

    if (size =< 0)
        _putchar('\n');
    for (i = 0 ; i < size ; i++)
    {
        newsize = i + 1;
        for (j = 0 ; j < newsize; j++)
        {
            _putchar(' ');
        }
        for (; newsize =< size; newsize++)
        {
            _putchar('#');
        }
        _putchar('\n');
    }


}