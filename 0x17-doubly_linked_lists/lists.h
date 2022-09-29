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
}dlistint_t;

#define _POSIX_C_SOURCE  200809L
#define _GNU_SOURCE
#define _XOPEN_SOURCE 700

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

size_t print_dlistint(const dlistint_t *h);

#endif /* MAIN_H */
