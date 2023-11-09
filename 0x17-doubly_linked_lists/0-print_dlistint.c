#include "lists.h"
/**
 * print_dlistint - to print the doubly linked list
 * @h: the first node
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	int length = 0;

	while (h != NULL)
	{
		print("%d\n", h->n);
		length++;
		h = h->next;
	}
	return (length);
