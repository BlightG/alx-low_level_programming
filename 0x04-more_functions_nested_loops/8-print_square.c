#include "main.h"

/**
 * print_square - prints number from  - 14 ten times
 * @size: variabel for size of square
 * Return: a square with width and height of size
*/

void print_square(int size)
{
	int a, b;

	if (size > 0)
	{
		for (a = 0 ; a < size ; a++)
		{
			for (b = 0; b < size ; b++)
			{
				_putchar('#');
			}
		_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
