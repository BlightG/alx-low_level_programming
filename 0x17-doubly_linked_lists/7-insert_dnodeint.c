#include "lists.h"
/**
 *
 *
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp, *newnode;
	unsigned int i;

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL || h == NULL)
	{
		perror("Error: ");
		free(newnode);
		return (NULL);
	}
	temp = *h;
	newnode->n = n;
	for (i = 0; i < idx ; i++)
	{
		if (temp != NULL) 
			temp = temp->next;
		else
			return (NULL);
	}
	newnode->next = temp;
	newnode->prev = temp->prev;
	temp->prev = newnode;
	return (newnode);
}
