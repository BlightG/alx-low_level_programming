#include "main.h"

/**
 * _isupper - checkes if a function is upper case or not
 * @c: variable
 * Return: returns 1 or zero
*/

int _isupper(int c)
{
	int A;

	A = isupper(c);
	if (A != 0)
		A = 1;
	return (A);
}
