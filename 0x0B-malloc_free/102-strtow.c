#include "main.h"
/**
*
*
*
*/
char **strtow(char *str)
{
int i, wordprint, wordlength, wordcount, row, column;
char **word;

wordcount = 0;
if (str == NULL)
    return (NULL);
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
if (wordcount == 0) /*checks for " "*/
    return (NULL);
word = malloc((wordcount + 1) * sizeof(char *));
column = 0;
for (i = 0 ; str[i] != '\0' ; i++) 
{
    wordlength = 0;
    if (str[i] != ' ')
    {
        for (; str[i] != ' ' ; i++)
            wordlength++;
        /*intializes colums for each row*/
        word[column] = (char *) malloc((wordlength ) * sizeof(char));
        /*prints each words on newly inzialized column*/
        for (wordprint = 0 ; wordprint <= wordlength ; wordprint++)
        { 
            word[column][row] = str[(i - wordlength) + wordprint];
            row++;
        }
        word[column][row] = '\0';
        word[column][row] = '\n';
        column++;
    }
}
word[column][row] = '\0';
return (word);
}