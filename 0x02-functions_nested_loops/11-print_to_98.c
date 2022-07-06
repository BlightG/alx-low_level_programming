#include "main.h"
/**
 * print_to_98 - prints from n to 98
 * n: signed integer
 * REturn: void
*/
void print_to_98(signed int n)
{
	if (n <= 98)
	{	
		for (; n <= 98 ; n++)
		{
			printf("%d",n);
			if (n != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	if (n >= 98)
	{
		for (; n >= 98 ; n--)
		{
			printf("%d",n);
			if (n != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	_putchar('\n');
}
