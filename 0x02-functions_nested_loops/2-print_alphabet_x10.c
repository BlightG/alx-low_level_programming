#include "main.h"
/**
 * main - entry point
 * print_alphabet_x10 - printss 10 times the alphabet
 * Return: 0
 *
*/
void print_alphabet_x10(void)
{
	int A;
	char B;

	for (A = 0; A <= 9; A++)
	{
		for (B = 'a' ; B <= 'z' ; B++)
		{
			_putchar(B);
		}
		_putchar('\n');
	}
}
