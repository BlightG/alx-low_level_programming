#include "lists.h"
/**
* free_listint2 - frees a sigly linked list
* @head: head of a singly linked list
*/
void free_listint2(listint_t **head)
{
	listint_t *curr;

	curr = *head;
	while (curr != NULL)
	{
		listint_t *temp = curr;

		curr = curr->next;
		free(temp);
	}
	*head = NULL;
}
