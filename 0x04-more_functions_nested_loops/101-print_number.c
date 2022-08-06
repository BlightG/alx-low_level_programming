#include "main.h"
/**
*
*
*/
void print_number(int n)
{
    int i, j, k;
    float l;

    i = 1;
    k = 0;
    do
    {
        l = n / i;
        i = i * 10;
        k++;
    }while(l);
    for(j = 0; j < k ; j++)
    {
        i = i / 10;
	l = n / i;
	printf("%f\n", l);
    }
}
