#include "main.h"
/**
*
*
*
*/
char **strtow(char *str)
{
int i, j, wordprint, wordlength, wordcount, row, column;
char **word;

row = column = wordcount = 0;
if (str == NULL)
    return (NULL);
/*read indiviual word*/
for (i = 0 ; str[i] != '\0' ; i++) /*reads position on string*/
{
    for (j = 0; str[i + j] != ' ' ; j++) /*counts length of word*/
        ;
    if (str[i] != ' ')/*uses word count to intialize rows*/
        wordcount++;
}
if (i == 0
    return(NULL);
word = malloc((wordcount + 1) * sizeof(char *));
for (i = 0 ; str[i] != '\0' ; i++) 
{
    wordlength = 0;
    while (str[i + j] != ' ') 
    {
        j++;
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
    j = 0;
}
if (word == NULL)
    return (NULL);
word[row][column] = '\0';
return (word);
}