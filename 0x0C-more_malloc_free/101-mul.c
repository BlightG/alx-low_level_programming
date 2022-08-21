#include "main.h"
/**
* main - Entry point of program
*
* @argc: count of multiples
* @argv: array of strings
*
* Return: always 0 if succsess
*/
int main(int argc, char *argv[])
{
	int mul, num1, num2;

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	if ( num1 > INT_MAX || num2 > INT_MAX)
	{
		printf("Error\n");
		exit (98);
	}
	if ( num1 < INT_MIN || num2 < INT_MIN || argc != 3)
	{
		printf("Error\n");
		exit (98);
	}

	mul = num1 * num2;
	printf("%d\n", mul);
	return (0);
}
