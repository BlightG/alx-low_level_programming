#include <stdio.h>
#include <ctype.h>
/**
 * main - entry point
 * _islower - checks if c is lowercase or uppercasae
 * return: 0
*/
int _islower(int c)
{
	int c;
	int ret;
	
	if (c <= 122 && c >= 97)
	{
	 	ret = 1;
	}
	else
	{
		ret = 0;
	}
	return ret;
}
int main (void)
{
	
}
