#include "variadic_functions.h"
/**
*
*
*
*/
void print_all(const char * const format, ...)
{
    va_list arg;
    const int n;
    int j , integer;
    char character;
    char* string;
    float floating;

    n = strlen(format);
    va_start (arg, format);
    j = 0;
    while (j < n)
    {
        if (format[j] == 'i', format[j] == 'c', format[j] == 'f', format[j] == 's')
        {
            switch (format[j])
            {
                case i:
                    integer = va_arg(arg,int);
                    printf("%d", integer);
                    break;
                case c:
                    character = va_arg(arg, char);
                    printf("%f", floating);
                    break;
                case f:
                    floating = va_arg(arg, float)
                    printf("%f", floating);
                    break;
                case s: 
                    string = va_arg(arg, char*);
                    printf("%s", string);
                    break;
            }
        if (j != (n - 1))
            printf(", ");
        }
        j++;
    }
    printf("\n");
    va_end(arg);

}