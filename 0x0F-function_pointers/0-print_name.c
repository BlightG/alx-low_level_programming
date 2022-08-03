#include "function_pointers.h"
/**
* print_name - prints name using the specified function
*
* @name: a string
* @f:pointer to a function that returns void and takes a string as input
*
*/
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
