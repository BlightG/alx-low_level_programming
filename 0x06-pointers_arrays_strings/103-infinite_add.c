#include <stdio.h>
#include <stdlib.h>
/**
 *
*/
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i, j, k, remainder = 0;
	char *res = "";
	
	i = j = 0;
	k = size_r - 1;
	r[size_r] = '\0';

	while (n2[j] != '\0')
		j++;
	j--;

	while (n1[i] != '\0')
		i++;
	i--;

	while (j >= 0 && i >= 0)
	{
		r[k] = n1[i] + n2[j] + remainder - 48;
		remainder = 0;
		if (r[k] > 57)
		{
			remainder = 1;
			r[k] = r[k] - 10;
		}
		printf("r[%d] = %c, n1[%d] = %c, n2[%d] = %c\n", k, r[k], i, n1[i], j, n2[j]);
		j--;
		i--;
		k--;
	}
/*	if (r[k] != '\0' || i != 0)
	{
		return (0);
	}*/


	for (i = 0 ; i <= size_r ; i++)
		res[i] = r[i];
	printf("res = %s\n", res);	
	return (r);
}
