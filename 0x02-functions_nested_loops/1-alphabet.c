#include "main.h"
/**
 * main - entry point
 * description: uses print alphabetfunction to print alphabet
 * return: 0
*/
void print_alphabet(void)
{
     int Alpha;
     for (Alpha = 'a' ; Alpha <= 'z' ; Alpha++)
     {
     _putchar(Alpha);
     }
     _putchar('\n');
}
