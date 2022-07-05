#include <stdio.h>

/**
 * main - entry point
 * print_alphabet - void function returns 0
 * description: uses print alphabetfunction to print alphabet
 * return: 0
*/
void print_alphabet(void);
{
	int A = 'a';

	for (; A <= 'z' ; A++)
	{
		putchar(A);
	}
}
int main(void)
{
	print_alphabet();
	puthcar('\n');
	return (0);
}
