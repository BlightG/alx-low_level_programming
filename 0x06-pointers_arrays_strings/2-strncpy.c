#include "main.h"
/**
* _strncpy - copies n characters from src to dest
*
* @dest: destination string
* @src: source array
* @n: numbers of caracters to be copied from src
*
* Return: It returns string dest
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i, j, destcnt, srccnt;


	if (dest == NULL || src == NULL)
		return (NULL);

	/**counting the length of the dest and src strings */
	for (destcnt = 0 ; dest[destcnt] != '\0' ; destcnt++)
		;
	for (srccnt = 0 ; src[srccnt] != '\0'; srccnt++)
		;

	/*if  dest does not  have the required space return null*/
	if (destcnt < n)
		return (NULL);

	/**
	 * if src count is grater than the copied character amount
	* recursively print from src to dest until n
	*/
	if (srccnt >= n)
	{
		for (j = 0, i = 0 ; i < n ; j++, i++)
			dest[i] = src[j];
	}
	/**
	 * else if n is grater after copying all the values of src
	 * make the remaining empty spaces equal to 0 byte
	 */
	else
	{
		for (j = 0, i = 0 ; i < srccnt ; j++, i++)
			dest[i] = src[j];
		for (; i < n ; i++)
			dest[i] = 0;
	}
	return (dest);
}
