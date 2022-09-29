#include "lists.h"
/**
 *
 *
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	temp = head;
	if (temp == NULL || head == NULL)
		exit(0);
	while (temp != NULL)
	{
		temp = temp->next;
		free(temp->prev);
	}
	free(temp);
}
