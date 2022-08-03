#include "function_pointers.h"
/**
*
*
*/
int main(int arc, char *argv[])
{
    int num1, num2;
    char operator;

    if (argc != 4)
    {
        printf("argc is %d\n", argc);
        exit (98);
    }
    else if (operator != (+ || - || * || / || %))
    {
        printf("%s is an invalid operator");
        exit (99);
    }
    num1 = atoi(argv[1]);
    num2 = atoi(argv[3]);
    printf("num1 is %d\n", num1);
    printf("num2 is %d\n", num2);
    return(0);



}