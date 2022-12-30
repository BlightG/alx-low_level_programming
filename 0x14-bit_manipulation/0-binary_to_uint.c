#include "main.h"
/**
* _pow - similar to pow in maths.h
*
* @x: base of power function
* @y: exponent of power function
*
* Return: answer to x raise to y
*/
unsigned int _pow(int x, int y)
{
	int i;
	unsigned int ans;

	ans = 1;

	for (i = 0 ; i < y ; i++)
		ans = ans * x;

	return (ans);
}
/**
* binary_to_uint - changes binary to unsigned int
*
* @b: string of a binary number
*
* Return: an unisgned in value or o
*/
unsigned int binary_to_uint(const char *b)
{
	int i, power;
	unsigned int binary;
	/* initializes values as zero*/
	binary = power = 0;

	/*check if pointer is null*/
	if (b == NULL)
		return (0);

	/**
	 * for lop used to count string length and
	 * check for invalid characters
	 */
	for (i = 0 ; b[i] != '\0' ; i++)
	{
		if (b[i] == 49 || b[i] == 48)
			;
		else
			return (0);
	}
	/**
	 * uses i as value of string length starts from end
	 * of string and goes to first value while adding
	 * value of power from zero until string legth counter
	 * i gets to zero
	 */
	for (i-- ; i >= 0 ; power++, i--)
	{
		binary = binary + ((b[i] - 48) * _pow(2, power));
	}
	return (binary);
}
