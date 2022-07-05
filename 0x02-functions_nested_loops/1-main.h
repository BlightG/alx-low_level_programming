#include <stdio.h>
/**
 * main - entry point
 * description - prints aplhabet
 * returns: void
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
