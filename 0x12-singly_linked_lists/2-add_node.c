#include "lists.h"
/**
*
*
*/
list_t *add_node(list_t **head, const char *str)
{
    /*check if **head is null;*/
    list_t *newhead;

    newhead = malloc(sizeof(list_t));
    if (head == NULL || newhead == NULL)
        return (NULL);
    /*printf("head:%p, newhead:%p, *head:%p, newhead->next: %p", head, newhead, *head, newhead->next);*/
    /*duplicate value of str;*/
    if (str != NULL)
    {
        printf("str:%s, ", str);
        newhead->str = strdup(str);
        /*printf("newhead->str:%s, ", newhead->str);*/
        newhead->len = strlen(newhead->str);
        /*printf("newhead->len:%d\n ", newhead->len);*/
    }
    newhead->next = *head;
    *head = newhead;
    /*printf("head:%p, newhead:%p, *head:%p, newhead->next: %p\n", head, newhead, *head, newhead->next);*/
    return (*head);
}
