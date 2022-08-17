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
	int firstnode;
	listint_t *newhead, *temp;

	if (*head != NULL)
	{
		temp = *head;
		newhead = temp->next;
		firstnode = temp->n;
		free(temp);
		*head = newhead;
		return (firstnode);
	}
	else
		return (0);
}
