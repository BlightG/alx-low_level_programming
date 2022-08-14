#include "main.h"
/**
*
*
*/
char *cap_string(char *str)
{
	int i, j;
	char reference[12] = {' ', '\n', ',', ';', '.', '!', '?', '"', '(', ')', 123, 125};

	i = 0;
	if (str == NULL)
		return (NULL);
	while (str[i] != '\0')
	{
		for (j = 0 ; reference[j] != '\0' ; j++)
		{
			if (str[i] == reference[j])
			{
				if(str[i + 1] >=  97 && str[i + 1] <= 122)
				{
					i++;
					str[i] = str[i] - 32;
				}
			}
		}
		i++;
	}
	return (str);
}
