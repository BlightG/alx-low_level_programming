#include "main.h"
/**
 * main - entry point for program
 * Descripiotn: FizzBuzz printing:
 * Return: 0 if sucesseful
*/
int main(void)
{
	int a;

	for (a = 1 ; a <= 100 ; a++)
	{
		if (a % 3 == 0 && a % 5 == 0)
			printf("FizzBuzz");
		else if (a % 5 == 0)
			printf("Buzz");
		else if (a % 3 == 0)
			printf("Fizz");
		else
			printf("%d", a);

		if (num != 100)
			printf(" ");
		else
			printf("\n");
	}
	return (0);
}
