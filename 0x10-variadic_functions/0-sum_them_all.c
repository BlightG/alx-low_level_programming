#include "variadic_functions.h"
/**
* sum_them_all - sums a variable length of int arguments
*
*@n: number of arguments
*
*Return: the sum of argumetns or 0 if not sucess
*/
int sum_them_all(const unsigned int n, ...)
{
	if (n == 0)
		return (0);
	va_list args;
	unsigned int i;
	int j, sum;

	sum = 0;

	va_start(args, n);
	for (i = 0 ; i < n ; i++)
	{
		j = va_arg(args, int);
		sum = sum + j;
	}
	va_end(args);
	return (j);
}
