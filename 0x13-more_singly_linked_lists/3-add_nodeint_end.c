#include "lists.h"

/**
 * add_nodeint_end - adds a node at the end of the linked list
 *
 * @head: pointer to the first node of the list
 * @n: int to add
 *
 * Return: NULL if it fails / starting addr of the list
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *temp;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	/*copy our starting node pointer to temp*/
	temp = *head;

	/*if temp is NULL place our new_node at the beginning of the list*/
	/*else if its not null we place our new_node to temp->next hence*/
	/*adding our new_node at the end of the list*/
	if (temp == NULL)
		*head = new_node;
	else
	{
		/**
		 * we iterate pointer next addr if its not NULL our temp addr
		 * points to the next addr or the next node.
		*/
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new_node;
	}
	if (head == NULL)
		free(head);
	while ((*head)->next != NULL)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
	}
	free(new_node);
	return (*head);
}

