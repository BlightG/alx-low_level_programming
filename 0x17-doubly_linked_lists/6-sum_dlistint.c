#include "lists.h"
/**
 * sum_dlistint - a function that sums all
 *                the data (n) of a dlistint_t linked list.
 *
 * @head: head of a doubly linkked list
 *
 * Return: sum of all n elements or 0
*/
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp;
	int sum;

	if (head == NULL)
		return (0);
	temp = head;
	sum = 0;
	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
