#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - prints from n to 98
 * n: signed integer
 * REturn: void
*/
void print_to_98(signed int n)
{
	signed int no;

	no = n;
	if (no < 98)
	{	
		for (; no <= 98 ; no++)
		{
			printf("%d", no);
			if (no != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	else if (no > 98)
	{
		for (; no >= 98 ; no--)
		{
			printf("%d", no);
			if (no != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	else 
		printf("%d", no);
	printf("\n");
}
