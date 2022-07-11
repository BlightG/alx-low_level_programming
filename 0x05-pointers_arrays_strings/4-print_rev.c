#include "main.h"

/**
 * print_rev - prints the reverse of a srting
 * @s: input string
 * Return: void
*/
void print_rev(char *s)
{
	int c;

	for (c = 0 ; s[c] == '\0' ; c++) 
		;
	for (--c ; c >= 0 ; c--)
		putchar(*(s + c));
	putchar('\n');
}
