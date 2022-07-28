#include "main.h"

/**
 * main - Entry point for the program
 *
 * @argc: count of arguments
 * @argv: array of arguments
 *
 * Return: 1 if argc isnto 3 or 0 if sucssfull
*/
int main(int argc, char *argv[])
{
	int k;

	if (argc == 3)
	{
		k = (atoi(argv[1]) * atoi(argv[2]));
		printf("%d\n", k);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
