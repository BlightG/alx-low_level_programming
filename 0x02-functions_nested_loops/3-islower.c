#include <ctype.h>
/**
 * main - entry point
 * _islower - checks if c is lowercase or uppercasae
 * return: 0
*/
int _islower(int c)
{
	int ret;

	ret = islower(c);
	return ret;	
}
