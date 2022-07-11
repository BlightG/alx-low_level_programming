#include "main.h"

/**
 * print_rev - prints the reverse of a srting
 * @s: input string
 * Return: void
*/
void print_rev(char *s)
{
	int c, t;

	c = *s;
	for (t = c ; t >= 0 ; t--)
		putchar(*(s + t));
	putchar('\n');
}
