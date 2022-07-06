#include "main.h"

/**
 * times_table - prints multiplication table
 * Returns: void
*/
void times_table(void)
{
	int firstNo, secondNo, timetable;

	for (firstNo = 0; firstNo <= 9 ; firstNo++)
	{
		for (secondNo = 0; secondNo <= 9 ; secondNo++)
		{
			timetable = firstNo * secondNo;
			_putchar((timetable / 10) + 48);
			_putchar((timetable % 10) + 48);
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
}
