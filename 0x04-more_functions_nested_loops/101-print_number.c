#include "main.h"
/**
*
*
*/
void print_number(int n)
{
    int i, j, k;

    i = 1;
    k = 0;
    while(n / i)
    {
        i = i * 10;
        k++;
    }
    for(j = 0; j < k ; k++)
    {
        i = i / 10;
    _putchar( n / i);
    }
    _putchar('\n');
}
