#include "main.h"
/**
* leet - changed certain characters in input string
*
* @str: input string
*
* Return: capitalized string or null
*/
char *rot13(char *str)
{
	int i, j;
	/**
	* the two arrays will be a store of the required
	* characters to be substituted and the characters
	* that substitute them.
	*/
	char reference[53] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char translation[53] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	i = 0;
	while (str[i] != '\0')
	{
		/**
		* the for loop checks if the character at
		* str[i] matches any of the  reference characters and
		* changes it to the matching translation
		*/
		for (j = 0 ; reference[j] != '\0' ; j++)
		{
			if (str[i] == reference[j])
			{
				str[i] = translation[j];
				break;
			}
		}

		i++;
	}
	return (str);
}

