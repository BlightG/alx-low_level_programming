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
	char  a = 'A';

	char A = 'a';

	for (A = 'a'; A <= 'z'; A++)
	{
		for (char  a = 'A'; a <= 'Z' ; a++)
		{
			putchar(a);
		}
		putchar(A);
	}
	putchar('\n');
	return (0);
}
