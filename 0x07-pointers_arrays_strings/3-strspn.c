#include "main.h"

/**
 * _strchr - searces for character c in array s
 *
 * @s: array to be searched
 * @c: character to be searched
 *
 * Return: NULL if no character found or adress if found
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i;

	i = 0;
	while (*s != *accept && *s != '\0')
	{	
		s++;
		i++;	
	}
	if (i)
	{
		i++;
		return (i);
	}
	else
		return (0);
}
