#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: A C program that prints with printf function.
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	int c = n % 10;

	if (c > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, c);
	}
	else if (c < 6 && c != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, c);
	}
	else
	{
		printf("Last digit of %d is %d and is 0\n", n, c);
	}
	return (0);
}
