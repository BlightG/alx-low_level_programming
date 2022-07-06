#include "main.h"
/*
 *
 *
*/
void print_to_98(int n)
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
	_putchar ('\n');
}
