#include "lists.h"
/**
 * get_dnodeint_at_index - function that returns the nth node
 *                         of a doubly linked list
 *
 * @head: head of a doubly linked list
 * @index: index of the nth node starting count from 0
 *
 * Return: pointer to nth node or NULL
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int i;

	if (head == NULL)
		return (NULL);

	temp = head;

	for (i = 0; i < index; i++)
	{
		if (temp->next == NULL)
			return (NULL);
		temp = temp->next;
	}
	return (temp);
}
