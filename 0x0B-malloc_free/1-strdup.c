#include "main.h"
/**
 *
 *
*/
char *_strdup(char *str)
{
	unsigned int i;
	char *j;

	for(i = 0 ; str[i] != '\0' ; i++)
		;
	if (i == 0)
		return (NULL);
	j = malloc(i * sizeof(char));
	if (j == NULL)
		return (NULL);
	else 		
		return (j);
	
}


