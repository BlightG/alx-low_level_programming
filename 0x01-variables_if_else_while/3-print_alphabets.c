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
	char a;

	char A;

	for (A = 'a'; A <= 'z'; A++)
	{
		putchar(A);	
	}
	for (a = 'A'; a <= 'Z' ; a++)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
