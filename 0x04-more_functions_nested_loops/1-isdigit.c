#include "main.h"

/**
 *_isdigit - determins if digit is from 0-9
 *@d: variable to be checked by _isdigit function
 *Return: non zeror number if argument is true
*/

int _isdigit(int d)
{
	if (isdigit(d))
		return (1);
	else
		return (0);
}
