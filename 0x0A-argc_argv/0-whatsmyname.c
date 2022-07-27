#include "main.h"
/**
 * main - entry point of program
 *
 *@argc: count of arguments
 *@argv: a pointer to a n array of strings
 *
 *Return: 0 if sucsessful
*/
int main(int argc, char *argv[])
{
	if (argc > 0)
		printf("%s\n",  argv[0]);
	return (0);
}
