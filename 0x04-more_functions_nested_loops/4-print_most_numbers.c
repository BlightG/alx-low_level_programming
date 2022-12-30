#include "main.h"
/**
 * print_most_numbers - prints numbers from 0 - 9 with 2&4
 * Retrun: Void;
*/
void print_most_numbers(void)
{
	int a;

	for (a = 0; a <= 9 ; a++)
	{
		if (a == 2 || a == 4)
			continue;
		_putchar(a + 48);
	}
	_putchar('\n');
}
