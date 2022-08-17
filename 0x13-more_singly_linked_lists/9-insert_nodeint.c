#include "lists.h"
/**
* insert_nodeint_at_index - inserts a node at index idx
*
* @head: head of linked list
* @idx: index of  new node
* @n: node value
*
* Return: pointer tonew node or null if it failed
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int indexcount;
	listint_t *temp, *newnode, *shiftnode;

	newnode = malloc(sizeof(listint_t));
	shiftnode = malloc(sizeof(listint_t));
	if (head == NULL || newnode == NULL || shiftnode == NULL)
		return (NULL);


	temp = *head;
	indexcount = 0;
	newnode->n = n;
	if ((*nodecounterptr) + 1 < idx)
		return (NULL);
	else

	/*if (idx == 0 && *head == NULL)
	{
		newnode->next = NULL;
		return (newnode);
	}
	else if (idx == 0 && *head != NULL)
	{
		shiftnode = *head;
		newnode->next= shiftnode;
		*head = newnode;
		return (*head);
	}*/

	while (indexcount < idx)
	{
		if(temp != NULL)
			temp = temp->next;
		else
		{
			printf("outside of range");
			return (NULL);
		}
		indexcount++;
	}

	shiftnode = temp->next;
	temp->next = newnode;
	newnode->next = shiftnode;
	return (newnode);
}
