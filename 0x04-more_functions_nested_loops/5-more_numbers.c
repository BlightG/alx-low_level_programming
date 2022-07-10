#include "main.h"

/**
 * more_numbers - prints number from 1- 14 tem times
 * Return: void
*/

void more_numbers(void)
{
	int a, b;

	for (a = 0 ; a <= 10 ; a++)
	{
		for (b = 0; b <= 14; b++)
		{
			_putchar(b + 48);
		}
		_putchar('\n');
	}
	_putchar('\n');
}
