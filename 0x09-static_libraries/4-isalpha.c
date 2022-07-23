#include <ctype.h>
/**
 * _isalpha- checks if c is alphabete
 * @c: is variable to be checked
 * Return: 1 if 'c'is alphabet 0 if not
*/
int _isalpha(int c)
{
	if (isalpha(c))
		return (1);
	return (0);
}
