#include <stdio.h>
/**
 * main - Entry point
 *
 * decription print
 *
 * Return: Always 0 (Sucsess)
*/
int main(void)
{
	int I;

	for (I = 0; I < 10; I++)
	{
		putchar(I + 48);
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
