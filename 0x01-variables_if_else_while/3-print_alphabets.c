#include <stdio.h>
/**
 *
 * Main - entry point
 *
 * description puts
 *
 * return upper and lower case alphabet
 *
*/
int main (void)
{
	char  a ='A';
	for (char A = 'a';A <= 'z'; A++)
	{
		for (char  a ='A'; a <= 'Z' ; a++)
		{
			putchar(a);
		}
		putchar(A);
	}	
	putchar('\n');
	return(0);
}
