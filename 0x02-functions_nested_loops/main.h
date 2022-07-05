#include <stdio.h>
/**
 * main - entry function
 * Returns: void
*/ 
void print_alphabet(void)
{
	int Alpha;
	for (Alpha = 'a' ; Alpha <= 'z' ; Alpha++)
	{
		putchar(Alpha);
	}
	putchar('\n');
}
