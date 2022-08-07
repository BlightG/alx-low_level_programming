#include <stdio.h>
#include <stdlib.h>
/**
*
*
*/
int main(void)
{
    long int i, fsum, fsumprev, fsumhold, evensum;
    fsum = 1;
    fsumprev = 0;
    for (i = 1 ; fsum <= 4000000; i++)
    {
        fsumhold = fsum;/*fsh = 1, 1, 2, 3*/
        fsum = fsum + fsumprev; /*fs = 1, 2, 3, 5,*/
        fsumprev = fsumhold; /* fsp = 1, 1, 2*/
        if (!(fsum % 2))
        {
            printf("%ld, ", fsum);
            evensum += fsum;
        }
    }
    printf("%ld\n", evensum);
    return(0);
}
