#include <stdlib.h>
#include <stdio.h>
/**
* printsum3_5 - pritns sum of 3 and 5 multiples
*
* @val: value showing up to which number to compute
*/
void printsum3_5(int val);
void printsum3_5(int val)
{
        int i, sum;

        for (i = 1 ; i < val ; i++)
        {
            if (!(i % 3) || !(i % 5))
                sum += i;
        }
        printf("%d\n", sum);
}
/**
* main - program Entry Point
*
* Return: 0 Always succsess
*/
int main(void)
{
    printsum3_5(1024);
    return(0);
}
