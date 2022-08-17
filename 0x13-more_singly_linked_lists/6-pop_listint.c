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

	if (head != NULL)
	{
		if ((newhead = (*head)->next) != NULL)
		{
			free(*head);
			head = &newhead;
			return ((*head)->n);
		}
		else
			return (0);
	}
	else
		return (0);
}
