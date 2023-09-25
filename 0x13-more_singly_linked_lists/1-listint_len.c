#include "lists.h"

/**
 * listint_len -  returns the number of elements in a linked listint_t list
 * @h: the pointer to the head of the node
 * Return:  number of elements in a linked listint_t list
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
