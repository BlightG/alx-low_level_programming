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
	size_t size;

	/* flip sum is the count of the bits to flip*/
	flipsum = 0;
	size = 8 * sizeof(unsigned long int);
	if (n & 1 << size)
		n -= n;
	if (m & 1 << size)
		m -= m;
	/**
	* the for loop iterates from zero to the size of
	* unsigned long int on the machine. for every bit it checks
	* if it is 1 the checks if the corresponding digit on the
	* other digit is 1 and same for 0.
	*/
	for (i = 0 ; i < size ; i++)
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
