#include "main.h"
/**
 * _puts_rev_recursion - prints a string
 *
 * @s: a string
 *
 * Return: void
*/
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
