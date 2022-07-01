#include <stdio.h>
/**
 * main - entry point
 *
 * description - prints alphabet in reverse order
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	for (int Z = 'z'; Z >= 'a'; Z--)
	{
		putchar(Z);
	}
	putchar('\n');
	return (0);
}
