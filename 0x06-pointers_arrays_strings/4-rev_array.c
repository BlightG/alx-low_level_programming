#include "main.h"
/**
*
*
*/
void reverse_array(int *a, int n)
{
	int i, j/*, newstart*/;
	/*int acount;*/
	int revptr[n];

	/*newstart = 0;*/
	if (a != NULL)
	{
		/*for (acount = 0 ; a[acount] != '\0' ; acount++)
			;
		acount--;
		printf("acount: %d,newstart: %d", acount, newstart);
		if (acount >= n)
			newstart = acount - n - 1;
		else
			newstart = 0;
		printf("acount: %d,newstart: %d\n", acount, newstart);*/
		for (i = n, j = 0 ; i >= 0 ; i--, j++)
		{
			printf("%d, ", a[i]);
			revptr[j] = a[i];
		}
		printf("\n");
		for (i = 0 ; i <= n; i++)
			printf("%d, ", revptr[i]);
		printf("\n");
	}
}
