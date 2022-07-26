#include "main.h"
/**
*
*
*/
char *str_concat(char *s1, char *s2)
{
    unsigned int i, j;
    char *k;

    for (i = 0 ; s1[i] != '\0' ; i++)
        ;
    for (j = 0 ; s2[j] != '\0' ; j++)
        ;
    k = malloc((i + j + 1) * sizeof(char));
    /*return variables ot zero and use them to conacte values of  s1 & s2*/
    i = j = 0;
    while(s1[i] != '\0')
    {
        k[i] = s1[i];
        i++;        
    }
    while(s2[j] != '\0')
    {
        k[i + j] = s2[j];
        j++;        
    }
    if (k == NULL)
        return (NULL);
    return (k);
}
