#include <stdlib.h>
#include <stdio.h>
/**
*
*
*/
int main (void)
{
    long int i, fsum, fsumprev, fsumhold;
    fsum = 1;
    fsumprev = 0;
    for (i = 1 ; i <= 50; i++)
    {
        fsumhold = fsum;/*fsh = 1, 1, 2, 3*/
        fsum = fsum + fsumprev; /*fs = 1, 2, 3, 5,*/
        fsumprev = fsumhold; /* fsp = 1, 1, 2*/
        if (i != 50)
            printf("%ld, ", fsum);
        else
            printf("%ld\n", fsum);
    }
    return(0);
}
