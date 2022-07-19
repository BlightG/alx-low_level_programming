#include "main.h"
/**
 * _strcmp - compars(ascii) two stings
 * @s1: string one
 * @s2: string two
 * Return: return postive if s1 is greater,
 *         negative if s2 is greater or,
 *         zero if equal
*/
int _strcmp(char *s1, char *s2)
{
	int i, j, f;

	i = 0;
	j = 0;
	f = 0;
	while ((s2[j] != '\0') && (s1[i] != '\0'))
	{
		if (s1[i] != s2[j])
		{
			if (s1[i] > s2[j])
			{
				f = 1;
				break;
			}
			else if (s1[i] < s2[j])
			{
				f = -1;
				break;
			}
		}
		else
		{
			j++;
			i++;
		}
	}
	return (f);
}
