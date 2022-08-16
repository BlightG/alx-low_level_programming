#include "lists.h"
/**
* pop_listint - delets the head of a singly linked list
*
*@head: pointer to head of list
*
*Return: returns value of n for head of list
*/
int pop_listint(listint_t **head)
{
	listint_t *newhead;

	newhead = malloc(sizeof(listint_t));
	if (head != NULL)
	{
		newhead = (*head)->next;
		head = &newhead;
		free(newhead);
		return ((*head)->n);
	}
	else
	{
		free(newhead);
		return (0);
	}
}
