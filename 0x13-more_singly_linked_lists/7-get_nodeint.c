#include "lists.h"
#include <stdlib.h>

/**
 * get_nodeint_at_index - as the name says
 * @head: pointer to node head
 * @index: nth point for insertion
 *
 * Return: nth node of a listint_t linked list or
 * null if the node does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head != NULL)
	{
		if (i == index)
			return (head);
		head = head->next;
		i++;
	}
	return (NULL);
}
