#include "main.h"
/**
* cap_string - a function that capitalizes all the words
*
*@str: string to be capitalized
*
*Return: str or NULL
*/
char *cap_string(char *str)
{
	int i;

	i = 0;

	if (str == NULL)
		return (NULL);
	while (str[i] != '\0')
	{
		switch (str[i])
		{
			case(' '):
				i++;
				str[i] = str[i] - 32;
				continue;
			case('\n'):
				i++;
				str[i] = str[i] - 32;
				continue;
			case( ',' ):
				i++;
				str[i] = str[i] - 32;
				continue;
			case(';'):
				i++;
				str[i] = str[i] - 32;
				continue;
			case('.'):
				i++;
				str[i] = str[i] - 32;
				continue;
			case('!'):
				i++;
				str[i] = str[i] - 32;
				continue;
			case('?'):
				i++;
				str[i] = str[i] - 32;
				continue;
			case('"'):
				i++;
				str[i] = str[i] - 32;
				continue;
			case('('):
				i++;
				str[i] = str[i] - 32;
				continue;
			case(')'):
				i++;
				str[i] = str[i] - 32;
				continue;
			case('{'):
				i++;
				str[i] = str[i] - 32;
				continue;
			case('}'):
				i++;
				str[i] = str[i] - 32;
				continue;
			/*case():
				str[i + 1] = str[i + 1] - 32;
				break;*/
		}
		i++;
	}
	return (str);
}
