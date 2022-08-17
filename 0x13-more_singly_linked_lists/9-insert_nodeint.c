#include "lists.h"
/**
*
*
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int indexcount;
	listint_t *temp;

	if (head == NULL)
		return (NULL);

	temp = head;
	indexcount = 0;
	while(indexcount < idx)
	{
		if(temp != NULL)
			temp = temp->next;
		else
			return(NULL);
		indexcount++;
	}
	temp->n = n;
	return(temp);
}
