#include <unistd.h>
#include <stdio.h>
int main (void)
{
	char ret [61] = "nd that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	write (1,ret,61);
	return (1);
}
