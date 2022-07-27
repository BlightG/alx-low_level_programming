#include "main.h"
/**
 * main - entry point
 *
 * @argc: count of argumrnts
 * @argv: array of argument strings
 *
 * Returns: 0 if suceccsfull
 *
*/
int main(int argc, char *argv[])
{
	int i;

	for (i = 0 ; argv[i] != '\0' ; i++)
		;
	prtinf("%d\n", argc);
	return (0);
}
