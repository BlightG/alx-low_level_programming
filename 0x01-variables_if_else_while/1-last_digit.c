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
	int n, C;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	C = n % 10;
	if (C > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, C);
	}
	else if (C < 6 && C != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, C);
	}
	else
	{
		printf("Last digit of %d is %d and is 0\n", n, C);
	}
	return (0);
}
