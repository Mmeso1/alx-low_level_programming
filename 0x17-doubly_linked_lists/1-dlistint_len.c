#include "lists.h"

/**
 * dlistint_len - print the length of the dlist
 * @h: the head node
 * Return: the number of elements in a linked dlistint_t list
 */
size_t dlistint_len(const dlistint_t *h)
{
	int length = 0;

	while (h != NULL)
	{
		length++;
		h = h->next;
	}
	return (length);
}
