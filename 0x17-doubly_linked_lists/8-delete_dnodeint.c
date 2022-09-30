#include "lists.h"
/**
 *
 *
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int cur_idx = 0;

	if (!*head)
		return (-1);

	temp = *head;

	if (index == 0)
	{
		*head = temp->next;
		if (temp->next)
			temp->next->prev = NULL;
		free(temp);
		return (1);
	}

	while (temp)
	{
		if (cur_idx == index)
		{
			temp->prev->next = temp->next;
			temp->next->prev = temp->prev;
			return (1);
		}
		temp = temp->next;
		cur_idx++;
	}

	return (-1);
}
