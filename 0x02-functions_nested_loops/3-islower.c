#include <ctype.h>
/**
 * _islower - checks if c is lowercase or uppercasae
 * int c - is vriable to be checked
 * return - 1 if lower 0 if not lower
*/

int _islower(int c)
{
	if (islower(c))
		return (1);
	return (0);
}
