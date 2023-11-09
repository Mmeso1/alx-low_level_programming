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
	dlistint_t *new_node = malloc(sizeof(dlistint_t)), *temp;
	unsigned int i = 0;

	if (new_node == NULL || h == NULL)
		return (NULL);

	new_node->n = n;
	if (idx == 0)
	{
		new_node->prev = NULL;
		new_node->next = *h;
		if (*h != NULL)
			(*h)->prev = new_node;
		*h = new_node;
		return (new_node);
	}

	temp = *h;
	while (temp != NULL)
	{
		if (i == idx)
		{
			new_node->prev = temp->prev;
			new_node->next = temp;

			if (temp->prev != NULL)
				temp->prev->next = new_node;
			temp->prev = new_node;
			return (new_node);
		}
		temp = temp->next;
		i++;
	}
	free(new_node);
	return (NULL);
}
