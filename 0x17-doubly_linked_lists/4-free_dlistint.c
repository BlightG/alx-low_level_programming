#include "lists.h"
/**
 * free_dlistint - frees a doubly linked list
 *
 * @head: pointer to head of struct
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	temp = head;
	if (temp == NULL || head == NULL)
		exit(0);
	while ((temp  = head) != NULL)
	{
		head = head->next;
		free(temp);
	}
}
