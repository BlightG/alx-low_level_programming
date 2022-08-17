#include "lists.h"
/**
* get_nodeint_at_index - gets the node of a linked list at index
*
* @head: head of linked list
* @index: index of the node
*
* Return: node at index or null
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int indexcount;
	listint_t *indexnode, *temp;

	if (head == NULL)
		return (NULL);
	indexcount = 0;
	temp = head;
	while(indexcount < index)
	{
		if (temp->next != NULL)
		{
			temp = temp->next;
			indexcount++;
		}
		else
			return(NULL);
	}
	indexnode = temp;
	return(indexnode);
}
