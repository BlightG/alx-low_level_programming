#include "main.h"
/**
*
*
*/
char *_strncpy(char *dest, char *src, int n)
{
	int i, j;


	if (dest == NULL || src == NULL)
		return (NULL);
	/*for(i = 0 ; dest[i] != '\0' ; i++)
		;*/
	for(j = 0 ,i = 0; i < n ; j++, i++)
		dest[i] = src[j];
	return(dest);
}
