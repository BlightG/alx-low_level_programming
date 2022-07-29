#include "main.h"
/**
*
*
*
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
int i;
void *ptr;

if (nmemb == 0 || size || == 0)
    return (NULL);
ptr = malloc(nmemb * sizeof(size));
if (ptr == NULL)
    return (NULL);
for (i = 0 ; i < nmemb ; i++)
    ptr[i] = 0;
return (ptr);
}