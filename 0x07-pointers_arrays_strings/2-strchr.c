#include "main.h"

/**
 * _strchr - searces for character c in array s
 *
 * @s: array to be searched
 * @c: character to be searched
 *
 * Return: NULL if no character found or adress if found
*/
char *_strchr(char *s, char c)
{
	int i, j;
	char k;

	j = 0;
	for (i = 0 ; s[i] != '\0' ; i++)
		;

	while ((j < i) && (k != c))
	{
		k =  s[j];
		if (k == c)
		{
			return (&s[j]);
		}
		j++;
	}
	return (NULL);
}
