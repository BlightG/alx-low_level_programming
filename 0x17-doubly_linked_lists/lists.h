#ifndef MAIN_H
#define MAIN_H
/**
 * struct dlistint_s - Doubly linked list
 * @n: int value stored in the strucutre
 * @next: points to the next node
 * @prev: points to the previous node
 *
 * Description: Doubly linked list node structure
 */
typedef struct dlistint_s
{
	int n;
	struct dlistint_s *next;
	struct dlistint_s *prev;
} dlistint_t;

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

size_t dlistint_len(const dlistint_t *h);
size_t print_dlistint(const dlistint_t *h);
dlistint_t *add_dnodeint(dlistint_t **head, const int n);

#endif /* MAIN_H */
