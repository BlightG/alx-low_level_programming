#include "function_pointers.h"
/**
* array_iterator -  a function that
* executes a function each element of an array
*
* @array: array to be eentered to functio
* @size: size of array
* @action: pointer to function
*
* Return: void
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i;

	if (array && size && action)
	{
		for (i = 0 ; i < size; i++)
		{
			action(array[i]);
		}
	}
}
