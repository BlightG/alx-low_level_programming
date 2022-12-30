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
	int s1i, s2i, count;

	s1i =  s2i = count = 0;
	while ((s1[s1i] != '\0') && (s2[s2i] != '\0'))
	{
		/* printf("while 1, ");*/
		count += s1[s1i] - s2[s2i]; 
		/* printf("count = %d, s1[%d] = %c ,s2[%d] = %c \n",count, s1i, s1[s1i], s2i, s2[s2i]); */
		s1i++;
		s2i++;
	}
	while (s1[s1i] != '\0')
	{
		/* printf("while 2, "); */
		count -= s1[s1i] - 106;		
		s1i++;
		/* printf("count = %d, s1[%d] = %c ,s2[%d] = %c \n",count, s1i, s1[s1i], s2i, s2[s2i]); */
	}
	while (s2[s2i] != '\0')
	{
		/* printf("while 3, "); */
		count += s2[s2i] - 106;		
		s2i++;
		/* printf("count = %d, s1[%d] = %c ,s2[%d] = %c \n",count, s1i, s1[s1i], s2i, s2[s2i]); */
	}
	return (count);
}
