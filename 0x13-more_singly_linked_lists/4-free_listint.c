#include "lists.h"
/**
* free_listint - frees a singly linked list
*
* @head: head of linked list to be freed
*/
void free_listint(listint_t *head)
{
	listint_t *temp;

	temp = malloc(sizeof(listint_t));
	/*if (&head == NULL)
		free(head);*/
	while (head->next != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
	free(head);
}
