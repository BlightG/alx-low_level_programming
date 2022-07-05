#include <stdio.h>
/**
 * main - entry function
 * Returns: void
*/ 
void print(void)
{
	printf("_putchar\n");
}
char _putchar(char c)
{
	char ret;

	ret = putchar(c);
	return ret;
}
void print_alphabet(void)
{
	int Alpha;
	for (Alpha = 'a' ; Alpha <= 'z' ; Alpha++)
	{
		_putchar(Alpha);
	}
	_putchar('\n');
}
