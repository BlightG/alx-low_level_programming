#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: print the value of n status:
 *              greater than, is zero and is not less than 6.
 *
 * Return: Always O (Success)
*/
int main(void)
{
int A, B, C, D;

	for (A = 1; A <= 9; A++)
	{
		for (B = 0; B <= 9; B++)
		{
			for (C = 0; C <= 9; C++)
			{
				for (D = 0; D <= 9; D++)
				{
					putchar(A + 48);
					putchar(B + 48);
					putchar(' ');
					putchar(C + 48);
					putchar(D + 48);
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
