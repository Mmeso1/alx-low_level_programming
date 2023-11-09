#include "lists.h"
/**
 * insert_dnodeint_at_index -inserts a new node at a given position.
 * @h: the head node
 * @idx: the index where the node will be inserted
 * @n: the value of the node to be inserted
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *temp, *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL || h == NULL)
		return (NULL);

	if (idx == 0)
		return (add_dnodeint(&*h, n));

	temp = *h;
	new->n = n;
	while (temp)
	{
		if (i == idx)
		{
			new->next = temp;
			new->prev = temp->prev;
			temp->prev->next = new;
			temp->prev = new;
			return (new);
		}

		i++;
		temp = temp->next;
	}

	if (idx == i)
		return (add_dnodeint_end(&*h, n));

	return (NULL);
}
