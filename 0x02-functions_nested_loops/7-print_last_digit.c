#include "main.h"
#include <stdlib.h>
/**
 * _abs - ichecks if c is alphabete
 * @b: is variable to be checked
 * Return: returns the last digit of b
*/
int print_last_digit(int b)
{
	int ret;
 	int retP;

	retP = abs(b);
	ret = retP % 10;
	printf("%d", ret);
	return (ret);
}
