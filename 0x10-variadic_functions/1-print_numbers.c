#include "variadic_functions.h"
/**
 * main - check the code
 *
 * Return: Always 0.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
    va_list arg;
    unsigned int i;
    int j;
    
    va_start (arg, n);
    
    for(i = 0 ; i < n ; i++)
    {
        j = va_arg(arg, int);
        printf("%d\n", j);
        if (separator != NULL)
            printf("%s\n", separator); 
    }
    va_end (arg);
}