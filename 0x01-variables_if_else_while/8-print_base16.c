#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: A C program that prints with printf function.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a;
	char A;

	for (a = 0; a < 9; a++)
	{
		putchar(a + 48);
	}
	for (A = 'a'; A <= 'f'; A++)
	{
		putchar(A);
	}
	putchar('\n');
	return (0);
}
