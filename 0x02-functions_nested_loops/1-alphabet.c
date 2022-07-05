#include "main.h"
/**
 * main - entry point
 * description: uses print_alphabet function to print alphabet alphabet
 * return: void 
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
