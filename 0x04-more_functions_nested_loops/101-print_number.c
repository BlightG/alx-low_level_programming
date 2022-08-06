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
        do
        {
            l = n / i;
            i = i * 10;
            k++;
        }while(l / 10 != 0);
        for(j = 0; j < (k -1) ; j++)
        {
            i = i / 10;
            l = (n / i) % (i / (i / 10));
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
