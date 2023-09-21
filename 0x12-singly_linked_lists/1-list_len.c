#include "lists.h"
#include <stdio.h>

/**
 * list_len - Calculate the number of elements
 * @h: the linked list
 * Return: number of elementsin a linked lists
 */

size_t list_len(const list_t *h)
{
	size_t node_count = 0;

	while(h != NULL)

	{
		node_count++;
		h = h->next;
	}
	return (node_count);
}
