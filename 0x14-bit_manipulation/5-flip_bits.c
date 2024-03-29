#include "main.h"
int *Unisgend_to_binary(unsigned long int, int* array);
void print_array(int *array, size_t size);
float poww(double x, double y);
/**
 * 
*/
int *Unisgend_to_binary(unsigned long int xor, int* array)
{
	size_t i = sizeof(unsigned long int);
	int j = 0;

	if (xor == 0)
		return (NULL);
	
	memset(array, 0, i);
	/*print_array(array, (sizeof(unsigned long int) * 8)+ 1);*/
	printf("i = %i\n", (int) i);
	while (i >= 1)
	{
		printf("pow(2 , i) = %f\n", poww((double) 2, (double) i));
		if (xor >= poww(2, i) && xor < poww(2, (i + 1)))
		{
			array[j] = 1;
			xor = xor - poww(2 , i);
		}
		i--;
		j++;
	}
	return (array);
}
/**
 * 
*/
float poww(double x, double y)
{
	double i;
	float pow = 1;

	for(i = 0 ; i < y ; i++)
	{
		pow = pow * x;
	}
	return (pow);
}
/**
 * print_array - Prints an array of integers
 *
 * @array: The array to be printed
 * @size: Number of elements in @array
 */
void print_array(int *array, size_t size)
{
	size_t i;

	i = 0;
	while (array && i < size)
	{
		if (i > 0)
			printf(", ");
		printf("%d", array[i]);
		++i;
	}
	printf("\n");
}
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
	unsigned long int xor = 0;
	int *array;

	array = malloc(sizeof(unsigned long int) + 1);
	if (!array)
		return (0);
	xor = n ^ m;

	Unisgend_to_binary(m, array);
	print_array(array, sizeof(unsigned long int)+ 1);
	free(array);
	return (xor);
}
