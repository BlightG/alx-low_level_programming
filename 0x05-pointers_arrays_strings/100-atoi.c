#include "main.h"
/**
* revers - reverses an input integer.
* @n: integr to be reversed
* Return: retruns the reverse of n
*/
int revers(int n);
int revers(int n)
{
	int reverse, remainder;

	reverse = 0;
	while (n != 0)
	{
		remainder = n % 10;
		reverse = reverse * 10 + remainder;
		n /= 10;
	}
	return (reverse);
}
/**
* _atoi - prints a number from a string of characters
*
* @s: pointer to print numbers from
* Return: int from s or 0
*/
int _atoi(char *s)
{
	unsigned int i, j, k, place, typcast;

	k = 0;
	j = 0;
	place = 1;

	for (i = 0 ; s[i] != '\0' ; i++)
	{
		while (s[i] >= 48 && s[i] <= 57)
		{
			typcast = s[i] - 48;
			j =  j + typcast * place;
			place = place * 10;
			i++;
			k++;
		}
		if (k)
		{
			if (s[i - k - 1] == '-')
				j = -j;
			j = revers(j);
			return (j);
		}
	}
	return (0);
}
