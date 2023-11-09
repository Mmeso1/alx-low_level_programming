#ifndef _LISTS_
#define _LISTS_

/**
 * struct dlistint_s - doubly linked list
 * @n: integer content of the node
 * @prev: points to the previous node
 * @next: points to the next node
 * Description: doubly linked list node structure
 */

typedef struct dlistint_s
{
	int n;
	struct dlistint_s *prev;
	struct dlistint_s *next;
}
size_t print_dlistint(const dlistint_t *h);
