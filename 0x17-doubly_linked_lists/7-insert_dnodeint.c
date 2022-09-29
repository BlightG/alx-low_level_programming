#include "lists.h"
/**
 * insert_dnodeint_at_index - a function that inserts a node at
 *                            the nth of a doubly linked list
 *
 * @h: a pointer to the linked list first pointer
 * @idx: the index of the node to be added counted form 0
 * @n:value of n at the idx node
 *
 * Return: a pointer the new node or NULL
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
		{
			free(newnode);
			return (NULL);
		}
	}
	newnode->next = temp;
	newnode->prev = temp->prev;
	if (idx)
		newnode->prev->next = newnode;
	else
		*h = newnode;
	temp->prev = newnode;
	return (newnode);
}
