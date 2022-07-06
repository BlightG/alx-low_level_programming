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
			if (timetable > 10)
			{
				_putchar((timetable / 10) + '0');
				_putchar((timetable % 10) + '0');
			}
			else
			{
				_putchar(' ');
				_putchar(timetable + '0');
			}
			if (secondNo != 9)
				_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
}
