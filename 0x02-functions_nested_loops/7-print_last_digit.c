#include "main.h"
/**
 * print_last_digit - ichecks if c is alphabete
 * @b: is variable to be checked
 * Return: returns the last digit of b
*/
int print_last_digit(int b)
{
	int lastDigit;

	if (b < 0)
		lastDigit = -1 * (b % 10);
	else
		lastDigit = b % 10;
	_putchar(lastDigit + '0');
	return (lastDigit);
}
