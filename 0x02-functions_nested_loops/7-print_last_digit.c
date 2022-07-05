#include "main.h"
#include <stdlib.h>
/**
 * print_last_digit - ichecks if c is alphabete
 * @b: is variable to be checked
 * Return: returns the last digit of b
*/
int print_last_digit(int b)
{
	int ret;
	int retP;

	retP = abs(b);
	ret = retP % 10;
	_putchar(48 + ret);
	return (ret);
}
