#include "../main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_tab - Prints an array of string
 * @tab: The array to print
 *
 * Return: nothing
 *
 * main - check the code for ALX School students.
 *
 * Return: 1 if an error occurred, 0 otherwise
 */
int main(void)
{
    int tab;

    tab = strtow(" il kl$% <>;LJ");
    if (tab == 0)
    {
        printf("Failed\n");
        return (1);
    }
    printf("%d",tab);
    return (0);
}
