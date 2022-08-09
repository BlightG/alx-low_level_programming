#include <stdlib.h>
#include <stdio.h>
/**
* main - Entry point to a program
*
* Return: Always Zero 0 if Sucess
*/
int main(void)
{
	unsigned long long int i, fsum, fsumprev, fsumhold;

	fsum = 1;
	fsumprev = 0;
	for (i = 1 ; i <= 98; i++)
	{
		fsumhold = fsum;/*fsh = 1, 1, 2, 3*/
		fsum = fsum + fsumprev; /*fs = 1, 2, 3, 5,*/
		fsumprev = fsumhold; /* fsp = 1, 1, 2*/
		if (i != 98)
			printf("%llu, ", fsum);
		else
			printf("%llu\n", fsum);
	}
	return (0);
}
