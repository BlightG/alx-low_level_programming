#include "main.h"
/**
 * print_sign - ichecks if c is alphabete
 * @n: is variable to be checked
 * Return: 1 if 'n'is postive 0 if  zero and -1 if negative
*/
int print_sign(int n)
{
	if (n < 0)
	{	
		return (-1);
		_putchar('-');
	}
	else if (n > 0) 
	{		
		return (1);
		_putchar('0');
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
