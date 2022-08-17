#include "lists.h"
/**
*
*
*/
void free_listint2(listint_t **head)
{
	listint_t *curr;

	if (head != NULL)
	{
		curr = *head;
		while (curr != NULL)
		{
			listint_t *temp = curr;
			curr = curr->next;
			free(temp);
		}
		*head = NULL;
	}
}
