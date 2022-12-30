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
	int Z;

	for (Z = 'z'; Z >= 'a'; Z--)
	{
		putchar(Z);
	}
	putchar('\n');
	return (0);
}
