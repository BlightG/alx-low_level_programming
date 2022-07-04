#include <unistd.h>
#include <stdio.h>
int main (void)
{
	char ret [59] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	write (1,ret,59);
	return (1);
}
