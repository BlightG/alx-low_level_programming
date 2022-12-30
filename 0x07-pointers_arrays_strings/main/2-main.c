#include "../main.h"
#include <stdio.h>

/**
 *  * main - check the code
 *   *
 *    * Return: Always 0.
 *     */
int main(void)
{
	char *s = "hemmo";
	char *f;

	f = _strchr(s, 'h');
	if (f != NULL)
	{
		printf("%s\n", f);
	}
	else
	{
		printf("NULL");
	}
	return (0);
}
