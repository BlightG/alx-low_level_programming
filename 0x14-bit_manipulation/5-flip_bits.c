#include "main.h"
/**
* flip_bits - counts the number of bits to filp
*
* @n: first number
* @m: second number to be compared
*
* Return: returns the number of bits fliped
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i, flipsum;

	/* flip sum is the count of the bits to flip*/
	flipsum = 0;
	/**
	* the for loop iterates from zero to the size of
	* unsigned long int on the machine. for every bit it checks
	* if it is 1 the checks if the corresponding digit on the
	* other digit is 1 and same for 0.
	*/
	for (i = 0 ; i < (8 * sizeof(unsigned long int)) ; i++)
	{
		if (n & 1 << i)
		{
			if (!(m & 1 << i))
				flipsum++;
			else
				continue;
		}
		else
		{
			if (!(m & 1 << i))
				continue;
			else
				flipsum++;
		}
	}
	return (flipsum);
}
