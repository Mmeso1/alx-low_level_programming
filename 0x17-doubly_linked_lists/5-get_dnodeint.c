#include "lists.h"

/**
 * get_dnodeint_at_index - gets the nth node of a dlistint_t linked list
 * @head: the head node
 * @index: the index or posiion of the node
 * Return: the nth node of a dlistint_t linked list
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head != NULL)
	{
		if (index != i)
		{
			head = head->next;
			i++;
		}
		else
			return (head);
	}
	return (NULL);
}
