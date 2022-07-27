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

row = column = wordcount = 0;
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
for (i = 0 ; str[i] != '\0' ; i++) 
{
    wordlength = 0;
    if (str[i] != ' ')
    {
        for (; str[i] != ' ' ; i++)
            wordlength++;
    }
    if (wordlength > 0) /*if there is a word intalize space and copy word*/
    {
        /*intializes colums for each row*/
        word[row] = malloc((wordlength + 1) * sizeof(int));
        column = 0;
        /*prints each wors on newly inzialized column*/
        for (wordprint = 0 ; wordprint < wordlength ; wordprint++)
        { 
            word[row][column] = str[i + wordprint];
            column++;
        }
        word[row][column] = '\0';
        row++;
    }
}
if (word == NULL)
    return (NULL);
word[row][column] = '\0';
return (word);
}