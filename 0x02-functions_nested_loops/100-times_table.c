#include "main.h"

/**
 * times_table - prints multiplication table
 * Returns: void
*/
void print_times_table(int n)
{
	int num, mult, prod;

	for (num = 0; num <= n; ++num)
	{
		_putchar(48);
		for (mult = 1; mult <= n; ++mult)
		{
			_putchar(',');
			_putchar(' ');
			prod = num * mult;
			printf("%d",prod);
			if (prod <= n)
				_putchar(' ');
		}
		_putchar('\n');
	}
	_putchar('\n');

}
