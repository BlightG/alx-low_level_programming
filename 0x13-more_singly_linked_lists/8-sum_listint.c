#include "lists.h"
/**
* sum_listint - sums the values of n for  the entire linked list
*
*@head: pointer to head of linked list
*
* Return: sum or 0 if null
*/
int sum_listint(listint_t *head)
{
	int nsum;
	listint_t *temp;

	/* inilitalize nsum and temp*/
	temp = head;
	nsum = 0;
	if (head == NULL)
		return (0);
	/**
	 *while temp is not null recusivly add
	 *values of n to nsum
	*/
	while (temp != NULL)
	{
		nsum += temp->n;
		temp = temp->next;
	}
	return (nsum);
}
