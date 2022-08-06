#include "main.h"
/**
*
*
*/
void print_number(int n)
{
    int i, j, k, l;

    i = 1;
    k = 0;
    if (n == 0)
        _putchar(48);
    else if ( n < 0)
    {
        _putchar('-');
        n = -n;
    }
    if (n > 0)
    {
        l = n / i;
        while(l / 10 != 0)/* (402/10) (402/10) (40/10 ) */
        {
            l = n / i; /* (l = 402) (l = 40) (l = 4)*/
            i = i * 10;/* (i = 10) (i = 100) (i = 1000)*/
            k++; /* k = 1 k = 2 k = 3*/
        }
        for(j = 0; j < (k -1) ; j++)/* j = 0 j = 2*/
        {
            i = i / 10;/* (i = 100) (i = 10 ) */
            l = (n / i) % (i / (i / 10)); /* (l = 4) (l = 40)*/
           _putchar(l + 48);
        }
        if (j == (k - 1))
        {
            l = n % 10;
            _putchar(l + 48);
        }
        if (n == 0)
            _putchar(48);
    }

}
