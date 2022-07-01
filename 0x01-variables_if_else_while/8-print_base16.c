#include <stdio.h>
/**
 * Main: Entry point
 *
 * Description - prints hex from o-f
 *
 * Return: 0 (Sucsess)
*/

int main(void)
{
	for (int a = 0; a < 9; a++)
	{
		putchar(a);
	}
	for (char A = 'a'; A < 'f'; A++)
	{
		putchar(A);
	}
	putchar('\n');
	return (0);
}
