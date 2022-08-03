#include "functio_pointers.h"
/**
* array_iterator -  a function that executes a function each element of an array
*
* @array:
* @size:
*
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
    int i;

    if (array && size && action)
    {
        for (i = 0 ; array[i] < size; i++)
        {
            *action(array[i]);
        }
    }
}
