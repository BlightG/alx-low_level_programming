#include "lists.h"
/*
*
*
*/
list_t *add_node_end(list_t **head, const char *str)
{
    list_t *newnode;
    list_t *temppointer;

    newnode = malloc(sizeof(list_t));
    temppointer = malloc(sizeof(list_t));
    /*printf("head:%p ,newnode:%p ,newnode->next:%p ,tempointer:%p , tempointer->next:%p", head, newnode, newnode->next, temppointer, temppointer->next);*/
    if (newnode == NULL || temppointer == NULL || head == NULL)
        return (NULL);

    if ( (*head)->next != NULL)
    {
        temppointer = (*head)->next;
        while (temppointer->next != NULL)
        {
            temppointer = temppointer->next;
            printf("temppointer:%p, temppointer ->next:%p ", temppointer,temppointer ->next);
        }
        temppointer->next = newnode;

    /*printf("head:%p ,newnode:%p ,newnode->next:%p ,tempointer:%p , tempointer->next:%p\n", head, newnode, newnode->next, temppointer, temppointer->next);*/
    }

    if (str != NULL)
    {
        newnode->str = strdup(str);
        newnode->len = strlen(newnode->str);
        newnode->next = NULL;
        printf("newnode->len:%d ,newnode->str:%s ", newnode->len, newnode->str);
        /*printf("temppointer->len:%d , tempointer->str:%s", temppointer->len, temppointer->str);*/
    }
    /*free(temppointer);*/
    return (temppointer->next);
}
