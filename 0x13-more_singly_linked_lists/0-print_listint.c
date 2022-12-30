#include "lists.h"
/**
* print_listint - prints the elements of a linked list
*
* @h: linked list to be printed
*
* Return: number of nodes printed
*/
size_t print_listint(const listint_t *h)
{
	size_t nodecount;

	nodecount = 0;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		nodecount++;
	}
	return (nodecount);
}
