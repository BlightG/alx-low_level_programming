#include <stdio.h>
/**
 * main- enttry point
 *
 * uses putchar to print alphabet
 *
 * Returns alphabet (a-Z)
 *
*/
int main(void)
{
	char A='a';
		while ( A <= 'z' )
		{
			putchar(A);
			A++; 
		}
	putchar('\n');
	return (0);
}
