#include "lists.h"
/**
* listint_len - countshte length of the structure elements
*
* @h: linked list to be printed
*
* Return: number of nodes printed
*/
size_t listint_len(const listint_t *h)
{
	size_t nodecount;

	nodecount = 0;
	while (h != NULL)
	{
		h = h->next;
		nodecount++;
	}
	return (nodecount);
}
