#include "main.h"
/**
 * _strcat - appendes string src to the end of dest upto nth char
 * @dest: first  string
 * @src: secondstring
 * Return: the total string value
*/
char *_strcat(char *dest, char *src)
{
	int j, k;

	for (j = 0 ; dest[j] != '\0' ; ++j)
		;

	for (k = 0 ; src[k] != '\0' ; ++k)
		dest[j + k] = src[k];

	dest[j + k] = '\0';
	return (dest);
}
