#include "lists.h"
/**
* insert_nodeint_at_index - inserts a node at index idx
*
* @head: head of linked list
* @idx: index of  new node
* @n: node value
*
* Return: pointer tonew node or null if it failed
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int indexcount;
	listint_t *temp, *newnode, *shiftnode;

	/*check if head or newnode null*/
	newnode = malloc(sizeof(listint_t));
	shiftnode = malloc(sizeof(listint_t));
	if (head == NULL || newnode == NULL || shiftnode == NULL)
		return (NULL);

	/*initialize the values of temp and index-counter and n of newnode*/
	temp = *head;
	indexcount = 0;
	newnode->n = n;
	/*if (idx == 0 && *head == NULL)
	{
		newnode->next = NULL;
		return (newnode);
	}
	else if (idx == 0 && *head != NULL)
	{
		shiftnode = *head;
		newnode->next= shiftnode;
		*head = newnode;
		return (*head);
	}*/
	/**
	 * The while loop moves along the linked list by recusrsivly
	 * equating values of temp to the next list value starting from head
	 * and counting using indexcount until indexcount is one less that idx
	 */
	while (indexcount < idx)
	{
		if(temp != NULL)
			temp = temp->next;
		else
		{
			printf("outside of range");
			return (NULL);
		}
		indexcount++;
	}
	/**
	 * when the list reaches the appropriate node it will insert the newnode
	 * by changing the pointer to newnode and using shiftnode to save value of the
	 * succeeding pointer and then making the newnode's next pointer to point to shiftnode;
	 *
	 */
	shiftnode = temp->next;
	temp->next = newnode;
	newnode->next = shiftnode;
	return (newnode);
}
