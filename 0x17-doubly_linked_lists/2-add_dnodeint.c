#include "lists.h"
/**
 * add_dnodeint - added a node at the head of doubly linked list
 *
 * @head: head of linked list
 * @n: int value of new node
 *
 * Return: the address of the new element, or NULL if it failed
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newnode;

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL || head == NULL)
	{
		free(newnode);
		dprintf(2, "Error: Can't malloc\n");
	        return (NULL);
	}
	newnode->n = n;
	newnode->next = *head;
	newnode->prev = NULL;
	head = &newnode;
	return (newnode);
}
