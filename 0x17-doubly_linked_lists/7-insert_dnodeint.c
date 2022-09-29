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
	dlistint_t *temp, *newnode, *last;
	unsigned int i;

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL || h == NULL)
	{
		perror("Error: ");
		free(newnode);
		return (NULL);
	}
	newnode->n = n;
	if (idx == 0)
	{
		newnode->prev = NULL;
		newnode->next = *h;
		*h = newnode;
		return (newnode);
	}
	temp = *h;
	for (i = 0; i < idx; i++)
	{
		if (temp == NULL)
		{
			free(newnode);
			return (NULL);
		}
		else
		{
			temp = temp->next;
			if (temp)
				last = temp;
		}
	}
	if (temp)
	{
		newnode->next = temp;
		newnode->prev = temp->prev;
		newnode->prev->next = newnode;
		temp->prev = newnode;
	}
	else
	{
		newnode->next = NULL;
		newnode->prev = last;
		last->next = newnode;
	}
	return (newnode);
}
