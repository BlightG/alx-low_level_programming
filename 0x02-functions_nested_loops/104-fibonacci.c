#include <stdlib.h>
#include <stdio.h>
/**
*
*
*/
int main (void)
{
    long unsigned int i, fsum, fsumprev, fsumhold;
    fsum = 1;
    fsumprev = 0;
    for (i = 1 ; i <= 98; i++)
    {
        fsumhold = fsum;/*fsh = 1, 1, 2, 3*/
        fsum = fsum + fsumprev; /*fs = 1, 2, 3, 5,*/
        fsumprev = fsumhold; /* fsp = 1, 1, 2*/
        if (i != 98)
            printf("%lu, ", fsum);
        else
            printf("%lu\n", fsum);
    }
    return(0);
}
