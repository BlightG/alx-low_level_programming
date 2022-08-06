#include "main.h"
/**
*
*
*
*
*/
void print_triangle(int size)
{
    int i, j, printsize;

        if (size <= 0)
    {
        _putchar('\n');
        exit (1);
    }
    for (i = 1 ; i <= size ; i++)/*prints size amount of lines*/
    {
        printsize = size - i;
        for (j = 0 ; j < printsize; j++)
        {
            _putchar(' ');
        }
        for (; printsize < size; printsize++)
        {
            _putchar('#');
        }
        _putchar('\n');
    }
    _putchar('\n');
}
