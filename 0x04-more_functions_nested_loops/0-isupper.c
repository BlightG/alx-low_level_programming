#include "main.h"
/**
 * _isupper - checkes if a function is upper case or not
 * @c: variable
 * Return: returns 1 or zero
*/

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
