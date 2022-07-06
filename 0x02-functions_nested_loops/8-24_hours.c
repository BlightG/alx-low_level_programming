#include "main.h"
/**
 * jack_bauer - prtints  from 00:00 to 23:59
 * Return: void
*/
void jack_bauer(void)
{
	int firstdigit, seconddigit;

	firstdigit = 0;
	for (; firstdigit <= 23 ; firstdigit++)
	{
		for (seconddigit = 0 ; seconddigit <= 59 ; seconddigit++)
		{
			_putchar((firstdigit / 10) + 48);
			_putchar((firstdigit % 10) + 48);
			_putchar(':');
			_putchar((seconddigit / 10) + 48);
			_putchar((seconddigit % 10) + 48);
			_putchar('\n');
		}
	}
}
