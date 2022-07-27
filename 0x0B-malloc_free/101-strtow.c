#include "main.h"
/**
*
*
*
*/
char strtow(char *str)
{
int i, wordcount;

wordcount = 0;
if (str == NULL)
    return (0);
/*read indiviual word*/
for (i = 0 ; str[i] != '\0' ; i++) /*reads position on string*/
{
	if (str[i] != ' ')
 	{
		for (; str[i] != ' ' ; i++) /*checks if positions has a word*/
   			;
	       	wordcount++;/*uses word count to intialize rows*/
	}
}
printf("%d\n", wordcount);
if (wordcount == 0) /*checks for " "*/
    return (0);
else 
	return (wordcount);
 }
