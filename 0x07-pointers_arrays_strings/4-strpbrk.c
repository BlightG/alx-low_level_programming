#include "main.h"

/**
 * _strpbrk- does similar work as strpbrk
 *
 * @s: array to be searched
 * @accept: character to be searched
 *
 * Return: string staring from first cahracter found
*/
char *_strpbrk(char *s, char *accept)
{
	int i, j, f;

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		f = 1;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				f = 0;
				break;
			}
			j++;
		}
		if (f != 1)
			break;
		i++;
	}
	return (&s[i]);
}
