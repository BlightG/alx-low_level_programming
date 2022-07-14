#include "main.h"
/**
 * _strcat - appendes string src to the end of dest
 * @dest: first  string
 * @src: secondstring
 * Return: the total string value
*/
char *_strcat(char *dest, char *src)
{
	int j, k, l, m;

	m = 0;
	for (j = 0 ; dest[j] != '\0' ; ++j)
		;

	for (k = 0 ; src[k]  == '\0' ; ++k)
		;

	for (l = j ; dest[l] == (j + k) ; l++)
	{
		dest[l] = src[m];
		m++;
	}
	return (dest);
}
