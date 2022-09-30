#include "lists.h"
/**
 *
 *
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp, *prev;
	unsigned int i;

	if (head == NULL)
		return (-1);
	temp = *head;
	if (index == 0)
	{
		head = &(*head)->next;
		free(temp);
		return (1);
	}
	for (i = 0 ; i < index ; i++)
	{	
		if (temp != NULL)
			temp = temp->next;	
		else
			return (-1);
	}
	prev = temp->prev;
	prev->next = temp->next;
	temp->next->prev = prev;
	free(temp);
	return (1);
}
