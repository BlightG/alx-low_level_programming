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
    if (str != NULL)
    {
        newhead->str = strdup(str);
        newhead->len = strlen(newhead->str);
    }
    if (*head == NULL)
		newhead->next = NULL;
	else
        newhead->next = *head;
    *head = newhead;
    return (*head);
}
