#include <stdio.h>

/**
 * main - entry point
 * print_alphabet - prints alphabet
 * description: uses print alphabetfunction to print alphabet
 * return: 0
*/
void print_alphabet(void)
{
	char A = 'a';

	for (; A <= 'z' ; A++)
	{
		putchar(A);
	}
	putchar('\n');
}
int main(void)
{
	print_alphabet();
	return (0);
}
